// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreusabledelegationsetresponse.h"
#include "createreusabledelegationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateReusableDelegationSetResponse
 * \brief The CreateReusableDelegationSetResponse class provides an interace for Route53 CreateReusableDelegationSet responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createReusableDelegationSet
 */

/*!
 * Constructs a CreateReusableDelegationSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReusableDelegationSetResponse::CreateReusableDelegationSetResponse(
        const CreateReusableDelegationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateReusableDelegationSetResponsePrivate(this), parent)
{
    setRequest(new CreateReusableDelegationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReusableDelegationSetRequest * CreateReusableDelegationSetResponse::request() const
{
    Q_D(const CreateReusableDelegationSetResponse);
    return static_cast<const CreateReusableDelegationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateReusableDelegationSet \a response.
 */
void CreateReusableDelegationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReusableDelegationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateReusableDelegationSetResponsePrivate
 * \brief The CreateReusableDelegationSetResponsePrivate class provides private implementation for CreateReusableDelegationSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateReusableDelegationSetResponsePrivate object with public implementation \a q.
 */
CreateReusableDelegationSetResponsePrivate::CreateReusableDelegationSetResponsePrivate(
    CreateReusableDelegationSetResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateReusableDelegationSet response element from \a xml.
 */
void CreateReusableDelegationSetResponsePrivate::parseCreateReusableDelegationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReusableDelegationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

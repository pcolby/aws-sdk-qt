// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrafficpolicyversionresponse.h"
#include "createtrafficpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionResponse
 * \brief The CreateTrafficPolicyVersionResponse class provides an interace for Route53 CreateTrafficPolicyVersion responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createTrafficPolicyVersion
 */

/*!
 * Constructs a CreateTrafficPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficPolicyVersionResponse::CreateTrafficPolicyVersionResponse(
        const CreateTrafficPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficPolicyVersionRequest * CreateTrafficPolicyVersionResponse::request() const
{
    Q_D(const CreateTrafficPolicyVersionResponse);
    return static_cast<const CreateTrafficPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateTrafficPolicyVersion \a response.
 */
void CreateTrafficPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrafficPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionResponsePrivate
 * \brief The CreateTrafficPolicyVersionResponsePrivate class provides private implementation for CreateTrafficPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyVersionResponsePrivate object with public implementation \a q.
 */
CreateTrafficPolicyVersionResponsePrivate::CreateTrafficPolicyVersionResponsePrivate(
    CreateTrafficPolicyVersionResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateTrafficPolicyVersion response element from \a xml.
 */
void CreateTrafficPolicyVersionResponsePrivate::parseCreateTrafficPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

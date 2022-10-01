// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrafficpolicyresponse.h"
#include "createtrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyResponse
 * \brief The CreateTrafficPolicyResponse class provides an interace for Route53 CreateTrafficPolicy responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createTrafficPolicy
 */

/*!
 * Constructs a CreateTrafficPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficPolicyResponse::CreateTrafficPolicyResponse(
        const CreateTrafficPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficPolicyRequest * CreateTrafficPolicyResponse::request() const
{
    Q_D(const CreateTrafficPolicyResponse);
    return static_cast<const CreateTrafficPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateTrafficPolicy \a response.
 */
void CreateTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrafficPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyResponsePrivate
 * \brief The CreateTrafficPolicyResponsePrivate class provides private implementation for CreateTrafficPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyResponsePrivate object with public implementation \a q.
 */
CreateTrafficPolicyResponsePrivate::CreateTrafficPolicyResponsePrivate(
    CreateTrafficPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateTrafficPolicy response element from \a xml.
 */
void CreateTrafficPolicyResponsePrivate::parseCreateTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

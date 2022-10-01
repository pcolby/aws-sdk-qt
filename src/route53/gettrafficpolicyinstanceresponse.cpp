// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettrafficpolicyinstanceresponse.h"
#include "gettrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceResponse
 * \brief The GetTrafficPolicyInstanceResponse class provides an interace for Route53 GetTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getTrafficPolicyInstance
 */

/*!
 * Constructs a GetTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrafficPolicyInstanceResponse::GetTrafficPolicyInstanceResponse(
        const GetTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrafficPolicyInstanceRequest * GetTrafficPolicyInstanceResponse::request() const
{
    Q_D(const GetTrafficPolicyInstanceResponse);
    return static_cast<const GetTrafficPolicyInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetTrafficPolicyInstance \a response.
 */
void GetTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceResponsePrivate
 * \brief The GetTrafficPolicyInstanceResponsePrivate class provides private implementation for GetTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
GetTrafficPolicyInstanceResponsePrivate::GetTrafficPolicyInstanceResponsePrivate(
    GetTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetTrafficPolicyInstance response element from \a xml.
 */
void GetTrafficPolicyInstanceResponsePrivate::parseGetTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

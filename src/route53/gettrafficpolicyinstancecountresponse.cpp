// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettrafficpolicyinstancecountresponse.h"
#include "gettrafficpolicyinstancecountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountResponse
 * \brief The GetTrafficPolicyInstanceCountResponse class provides an interace for Route53 GetTrafficPolicyInstanceCount responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getTrafficPolicyInstanceCount
 */

/*!
 * Constructs a GetTrafficPolicyInstanceCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrafficPolicyInstanceCountResponse::GetTrafficPolicyInstanceCountResponse(
        const GetTrafficPolicyInstanceCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetTrafficPolicyInstanceCountResponsePrivate(this), parent)
{
    setRequest(new GetTrafficPolicyInstanceCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrafficPolicyInstanceCountRequest * GetTrafficPolicyInstanceCountResponse::request() const
{
    Q_D(const GetTrafficPolicyInstanceCountResponse);
    return static_cast<const GetTrafficPolicyInstanceCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetTrafficPolicyInstanceCount \a response.
 */
void GetTrafficPolicyInstanceCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTrafficPolicyInstanceCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountResponsePrivate
 * \brief The GetTrafficPolicyInstanceCountResponsePrivate class provides private implementation for GetTrafficPolicyInstanceCountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceCountResponsePrivate object with public implementation \a q.
 */
GetTrafficPolicyInstanceCountResponsePrivate::GetTrafficPolicyInstanceCountResponsePrivate(
    GetTrafficPolicyInstanceCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetTrafficPolicyInstanceCount response element from \a xml.
 */
void GetTrafficPolicyInstanceCountResponsePrivate::parseGetTrafficPolicyInstanceCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrafficPolicyInstanceCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrafficpolicyinstanceresponse.h"
#include "updatetrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceResponse
 * \brief The UpdateTrafficPolicyInstanceResponse class provides an interace for Route53 UpdateTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::updateTrafficPolicyInstance
 */

/*!
 * Constructs a UpdateTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrafficPolicyInstanceResponse::UpdateTrafficPolicyInstanceResponse(
        const UpdateTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrafficPolicyInstanceRequest * UpdateTrafficPolicyInstanceResponse::request() const
{
    Q_D(const UpdateTrafficPolicyInstanceResponse);
    return static_cast<const UpdateTrafficPolicyInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 UpdateTrafficPolicyInstance \a response.
 */
void UpdateTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceResponsePrivate
 * \brief The UpdateTrafficPolicyInstanceResponsePrivate class provides private implementation for UpdateTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
UpdateTrafficPolicyInstanceResponsePrivate::UpdateTrafficPolicyInstanceResponsePrivate(
    UpdateTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 UpdateTrafficPolicyInstance response element from \a xml.
 */
void UpdateTrafficPolicyInstanceResponsePrivate::parseUpdateTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrafficPolicyInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcesetresponse.h"
#include "getresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetResourceSetResponse
 * \brief The GetResourceSetResponse class provides an interace for Route53RecoveryReadiness GetResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getResourceSet
 */

/*!
 * Constructs a GetResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceSetResponse::GetResourceSetResponse(
        const GetResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetResourceSetResponsePrivate(this), parent)
{
    setRequest(new GetResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceSetRequest * GetResourceSetResponse::request() const
{
    Q_D(const GetResourceSetResponse);
    return static_cast<const GetResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetResourceSet \a response.
 */
void GetResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetResourceSetResponsePrivate
 * \brief The GetResourceSetResponsePrivate class provides private implementation for GetResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetResourceSetResponsePrivate object with public implementation \a q.
 */
GetResourceSetResponsePrivate::GetResourceSetResponsePrivate(
    GetResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetResourceSet response element from \a xml.
 */
void GetResourceSetResponsePrivate::parseGetResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcellresponse.h"
#include "getcellresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellResponse
 * \brief The GetCellResponse class provides an interace for Route53RecoveryReadiness GetCell responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getCell
 */

/*!
 * Constructs a GetCellResponse object for \a reply to \a request, with parent \a parent.
 */
GetCellResponse::GetCellResponse(
        const GetCellRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetCellResponsePrivate(this), parent)
{
    setRequest(new GetCellRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCellRequest * GetCellResponse::request() const
{
    Q_D(const GetCellResponse);
    return static_cast<const GetCellRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetCell \a response.
 */
void GetCellResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCellResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellResponsePrivate
 * \brief The GetCellResponsePrivate class provides private implementation for GetCellResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetCellResponsePrivate object with public implementation \a q.
 */
GetCellResponsePrivate::GetCellResponsePrivate(
    GetCellResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetCell response element from \a xml.
 */
void GetCellResponsePrivate::parseGetCellResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCellResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquerystatisticsresponse.h"
#include "getquerystatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStatisticsResponse
 * \brief The GetQueryStatisticsResponse class provides an interace for LakeFormation GetQueryStatistics responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryStatistics
 */

/*!
 * Constructs a GetQueryStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueryStatisticsResponse::GetQueryStatisticsResponse(
        const GetQueryStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetQueryStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetQueryStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueryStatisticsRequest * GetQueryStatisticsResponse::request() const
{
    Q_D(const GetQueryStatisticsResponse);
    return static_cast<const GetQueryStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetQueryStatistics \a response.
 */
void GetQueryStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueryStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetQueryStatisticsResponsePrivate
 * \brief The GetQueryStatisticsResponsePrivate class provides private implementation for GetQueryStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStatisticsResponsePrivate object with public implementation \a q.
 */
GetQueryStatisticsResponsePrivate::GetQueryStatisticsResponsePrivate(
    GetQueryStatisticsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetQueryStatistics response element from \a xml.
 */
void GetQueryStatisticsResponsePrivate::parseGetQueryStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoreanalysisresponse.h"
#include "restoreanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::RestoreAnalysisResponse
 * \brief The RestoreAnalysisResponse class provides an interace for QuickSight RestoreAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::restoreAnalysis
 */

/*!
 * Constructs a RestoreAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreAnalysisResponse::RestoreAnalysisResponse(
        const RestoreAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new RestoreAnalysisResponsePrivate(this), parent)
{
    setRequest(new RestoreAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreAnalysisRequest * RestoreAnalysisResponse::request() const
{
    Q_D(const RestoreAnalysisResponse);
    return static_cast<const RestoreAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight RestoreAnalysis \a response.
 */
void RestoreAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::RestoreAnalysisResponsePrivate
 * \brief The RestoreAnalysisResponsePrivate class provides private implementation for RestoreAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a RestoreAnalysisResponsePrivate object with public implementation \a q.
 */
RestoreAnalysisResponsePrivate::RestoreAnalysisResponsePrivate(
    RestoreAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight RestoreAnalysis response element from \a xml.
 */
void RestoreAnalysisResponsePrivate::parseRestoreAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateanalysisresponse.h"
#include "updateanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAnalysisResponse
 * \brief The UpdateAnalysisResponse class provides an interace for QuickSight UpdateAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAnalysis
 */

/*!
 * Constructs a UpdateAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAnalysisResponse::UpdateAnalysisResponse(
        const UpdateAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateAnalysisResponsePrivate(this), parent)
{
    setRequest(new UpdateAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAnalysisRequest * UpdateAnalysisResponse::request() const
{
    Q_D(const UpdateAnalysisResponse);
    return static_cast<const UpdateAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateAnalysis \a response.
 */
void UpdateAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateAnalysisResponsePrivate
 * \brief The UpdateAnalysisResponsePrivate class provides private implementation for UpdateAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAnalysisResponsePrivate object with public implementation \a q.
 */
UpdateAnalysisResponsePrivate::UpdateAnalysisResponsePrivate(
    UpdateAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateAnalysis response element from \a xml.
 */
void UpdateAnalysisResponsePrivate::parseUpdateAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanalysisresponse.h"
#include "deleteanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteAnalysisResponse
 * \brief The DeleteAnalysisResponse class provides an interace for QuickSight DeleteAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteAnalysis
 */

/*!
 * Constructs a DeleteAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnalysisResponse::DeleteAnalysisResponse(
        const DeleteAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteAnalysisResponsePrivate(this), parent)
{
    setRequest(new DeleteAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnalysisRequest * DeleteAnalysisResponse::request() const
{
    Q_D(const DeleteAnalysisResponse);
    return static_cast<const DeleteAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteAnalysis \a response.
 */
void DeleteAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteAnalysisResponsePrivate
 * \brief The DeleteAnalysisResponsePrivate class provides private implementation for DeleteAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteAnalysisResponsePrivate object with public implementation \a q.
 */
DeleteAnalysisResponsePrivate::DeleteAnalysisResponsePrivate(
    DeleteAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteAnalysis response element from \a xml.
 */
void DeleteAnalysisResponsePrivate::parseDeleteAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

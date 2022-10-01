// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelingestionresponse.h"
#include "cancelingestionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CancelIngestionResponse
 * \brief The CancelIngestionResponse class provides an interace for QuickSight CancelIngestion responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::cancelIngestion
 */

/*!
 * Constructs a CancelIngestionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelIngestionResponse::CancelIngestionResponse(
        const CancelIngestionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CancelIngestionResponsePrivate(this), parent)
{
    setRequest(new CancelIngestionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelIngestionRequest * CancelIngestionResponse::request() const
{
    Q_D(const CancelIngestionResponse);
    return static_cast<const CancelIngestionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CancelIngestion \a response.
 */
void CancelIngestionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelIngestionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CancelIngestionResponsePrivate
 * \brief The CancelIngestionResponsePrivate class provides private implementation for CancelIngestionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CancelIngestionResponsePrivate object with public implementation \a q.
 */
CancelIngestionResponsePrivate::CancelIngestionResponsePrivate(
    CancelIngestionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CancelIngestion response element from \a xml.
 */
void CancelIngestionResponsePrivate::parseCancelIngestionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelIngestionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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

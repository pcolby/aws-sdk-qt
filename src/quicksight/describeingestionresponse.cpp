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

#include "describeingestionresponse.h"
#include "describeingestionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIngestionResponse
 * \brief The DescribeIngestionResponse class provides an interace for QuickSight DescribeIngestion responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIngestion
 */

/*!
 * Constructs a DescribeIngestionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIngestionResponse::DescribeIngestionResponse(
        const DescribeIngestionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeIngestionResponsePrivate(this), parent)
{
    setRequest(new DescribeIngestionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIngestionRequest * DescribeIngestionResponse::request() const
{
    Q_D(const DescribeIngestionResponse);
    return static_cast<const DescribeIngestionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeIngestion \a response.
 */
void DescribeIngestionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIngestionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeIngestionResponsePrivate
 * \brief The DescribeIngestionResponsePrivate class provides private implementation for DescribeIngestionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIngestionResponsePrivate object with public implementation \a q.
 */
DescribeIngestionResponsePrivate::DescribeIngestionResponsePrivate(
    DescribeIngestionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeIngestion response element from \a xml.
 */
void DescribeIngestionResponsePrivate::parseDescribeIngestionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIngestionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

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

#include "describefolderresponse.h"
#include "describefolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderResponse
 * \brief The DescribeFolderResponse class provides an interace for QuickSight DescribeFolder responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolder
 */

/*!
 * Constructs a DescribeFolderResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFolderResponse::DescribeFolderResponse(
        const DescribeFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeFolderResponsePrivate(this), parent)
{
    setRequest(new DescribeFolderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFolderRequest * DescribeFolderResponse::request() const
{
    Q_D(const DescribeFolderResponse);
    return static_cast<const DescribeFolderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeFolder \a response.
 */
void DescribeFolderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFolderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeFolderResponsePrivate
 * \brief The DescribeFolderResponsePrivate class provides private implementation for DescribeFolderResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderResponsePrivate object with public implementation \a q.
 */
DescribeFolderResponsePrivate::DescribeFolderResponsePrivate(
    DescribeFolderResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeFolder response element from \a xml.
 */
void DescribeFolderResponsePrivate::parseDescribeFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFolderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

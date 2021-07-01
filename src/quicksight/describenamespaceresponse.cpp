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

#include "describenamespaceresponse.h"
#include "describenamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeNamespaceResponse
 * \brief The DescribeNamespaceResponse class provides an interace for QuickSight DescribeNamespace responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeNamespace
 */

/*!
 * Constructs a DescribeNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNamespaceResponse::DescribeNamespaceResponse(
        const DescribeNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeNamespaceResponsePrivate(this), parent)
{
    setRequest(new DescribeNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNamespaceRequest * DescribeNamespaceResponse::request() const
{
    Q_D(const DescribeNamespaceResponse);
    return static_cast<const DescribeNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeNamespace \a response.
 */
void DescribeNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeNamespaceResponsePrivate
 * \brief The DescribeNamespaceResponsePrivate class provides private implementation for DescribeNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeNamespaceResponsePrivate object with public implementation \a q.
 */
DescribeNamespaceResponsePrivate::DescribeNamespaceResponsePrivate(
    DescribeNamespaceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeNamespace response element from \a xml.
 */
void DescribeNamespaceResponsePrivate::parseDescribeNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

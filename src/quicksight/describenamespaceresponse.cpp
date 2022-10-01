// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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

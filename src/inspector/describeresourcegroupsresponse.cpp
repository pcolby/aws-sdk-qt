// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcegroupsresponse.h"
#include "describeresourcegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsResponse
 * \brief The DescribeResourceGroupsResponse class provides an interace for Inspector DescribeResourceGroups responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeResourceGroups
 */

/*!
 * Constructs a DescribeResourceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourceGroupsResponse::DescribeResourceGroupsResponse(
        const DescribeResourceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeResourceGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourceGroupsRequest * DescribeResourceGroupsResponse::request() const
{
    Q_D(const DescribeResourceGroupsResponse);
    return static_cast<const DescribeResourceGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeResourceGroups \a response.
 */
void DescribeResourceGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeResourceGroupsResponsePrivate
 * \brief The DescribeResourceGroupsResponsePrivate class provides private implementation for DescribeResourceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeResourceGroupsResponsePrivate object with public implementation \a q.
 */
DescribeResourceGroupsResponsePrivate::DescribeResourceGroupsResponsePrivate(
    DescribeResourceGroupsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeResourceGroups response element from \a xml.
 */
void DescribeResourceGroupsResponsePrivate::parseDescribeResourceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws

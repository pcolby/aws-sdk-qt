// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexclusionsresponse.h"
#include "describeexclusionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeExclusionsResponse
 * \brief The DescribeExclusionsResponse class provides an interace for Inspector DescribeExclusions responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeExclusions
 */

/*!
 * Constructs a DescribeExclusionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExclusionsResponse::DescribeExclusionsResponse(
        const DescribeExclusionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeExclusionsResponsePrivate(this), parent)
{
    setRequest(new DescribeExclusionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExclusionsRequest * DescribeExclusionsResponse::request() const
{
    Q_D(const DescribeExclusionsResponse);
    return static_cast<const DescribeExclusionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeExclusions \a response.
 */
void DescribeExclusionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExclusionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeExclusionsResponsePrivate
 * \brief The DescribeExclusionsResponsePrivate class provides private implementation for DescribeExclusionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeExclusionsResponsePrivate object with public implementation \a q.
 */
DescribeExclusionsResponsePrivate::DescribeExclusionsResponsePrivate(
    DescribeExclusionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeExclusions response element from \a xml.
 */
void DescribeExclusionsResponsePrivate::parseDescribeExclusionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExclusionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerulespackagesresponse.h"
#include "describerulespackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeRulesPackagesResponse
 * \brief The DescribeRulesPackagesResponse class provides an interace for Inspector DescribeRulesPackages responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeRulesPackages
 */

/*!
 * Constructs a DescribeRulesPackagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRulesPackagesResponse::DescribeRulesPackagesResponse(
        const DescribeRulesPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeRulesPackagesResponsePrivate(this), parent)
{
    setRequest(new DescribeRulesPackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRulesPackagesRequest * DescribeRulesPackagesResponse::request() const
{
    Q_D(const DescribeRulesPackagesResponse);
    return static_cast<const DescribeRulesPackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeRulesPackages \a response.
 */
void DescribeRulesPackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRulesPackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeRulesPackagesResponsePrivate
 * \brief The DescribeRulesPackagesResponsePrivate class provides private implementation for DescribeRulesPackagesResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeRulesPackagesResponsePrivate object with public implementation \a q.
 */
DescribeRulesPackagesResponsePrivate::DescribeRulesPackagesResponsePrivate(
    DescribeRulesPackagesResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeRulesPackages response element from \a xml.
 */
void DescribeRulesPackagesResponsePrivate::parseDescribeRulesPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRulesPackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws

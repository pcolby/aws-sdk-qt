// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerulegroupsnamespaceresponse.h"
#include "describerulegroupsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeRuleGroupsNamespaceResponse
 * \brief The DescribeRuleGroupsNamespaceResponse class provides an interace for Amp DescribeRuleGroupsNamespace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeRuleGroupsNamespace
 */

/*!
 * Constructs a DescribeRuleGroupsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRuleGroupsNamespaceResponse::DescribeRuleGroupsNamespaceResponse(
        const DescribeRuleGroupsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DescribeRuleGroupsNamespaceResponsePrivate(this), parent)
{
    setRequest(new DescribeRuleGroupsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRuleGroupsNamespaceRequest * DescribeRuleGroupsNamespaceResponse::request() const
{
    Q_D(const DescribeRuleGroupsNamespaceResponse);
    return static_cast<const DescribeRuleGroupsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DescribeRuleGroupsNamespace \a response.
 */
void DescribeRuleGroupsNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRuleGroupsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DescribeRuleGroupsNamespaceResponsePrivate
 * \brief The DescribeRuleGroupsNamespaceResponsePrivate class provides private implementation for DescribeRuleGroupsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeRuleGroupsNamespaceResponsePrivate object with public implementation \a q.
 */
DescribeRuleGroupsNamespaceResponsePrivate::DescribeRuleGroupsNamespaceResponsePrivate(
    DescribeRuleGroupsNamespaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DescribeRuleGroupsNamespace response element from \a xml.
 */
void DescribeRuleGroupsNamespaceResponsePrivate::parseDescribeRuleGroupsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRuleGroupsNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws

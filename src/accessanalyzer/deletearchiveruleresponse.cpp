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

#include "deletearchiveruleresponse.h"
#include "deletearchiveruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::DeleteArchiveRuleResponse
 * \brief The DeleteArchiveRuleResponse class provides an interace for AccessAnalyzer DeleteArchiveRule responses.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  AWS IAM Access Analyzer helps identify potential resource-access risks by enabling you to identify any policies that
 *  grant access to an external principal. It does this by using logic-based reasoning to analyze resource-based policies in
 *  your AWS environment. An external principal can be another AWS account, a root user, an IAM user or role, a federated
 *  user, an AWS service, or an anonymous user. You can also use Access Analyzer to preview and validate public and
 *  cross-account access to your resources before deploying permissions changes. This guide describes the AWS IAM Access
 *  Analyzer operations that you can call programmatically. For general information about Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">AWS IAM Access Analyzer</a> in the
 *  <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::deleteArchiveRule
 */

/*!
 * Constructs a DeleteArchiveRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteArchiveRuleResponse::DeleteArchiveRuleResponse(
        const DeleteArchiveRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccessAnalyzerResponse(new DeleteArchiveRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteArchiveRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteArchiveRuleRequest * DeleteArchiveRuleResponse::request() const
{
    return static_cast<const DeleteArchiveRuleRequest *>(AccessAnalyzerResponse::request());
}

/*!
 * \reimp
 * Parses a successful AccessAnalyzer DeleteArchiveRule \a response.
 */
void DeleteArchiveRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteArchiveRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AccessAnalyzer::DeleteArchiveRuleResponsePrivate
 * \brief The DeleteArchiveRuleResponsePrivate class provides private implementation for DeleteArchiveRuleResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a DeleteArchiveRuleResponsePrivate object with public implementation \a q.
 */
DeleteArchiveRuleResponsePrivate::DeleteArchiveRuleResponsePrivate(
    DeleteArchiveRuleResponse * const q) : AccessAnalyzerResponsePrivate(q)
{

}

/*!
 * Parses a AccessAnalyzer DeleteArchiveRule response element from \a xml.
 */
void DeleteArchiveRuleResponsePrivate::parseDeleteArchiveRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteArchiveRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AccessAnalyzer
} // namespace QtAws

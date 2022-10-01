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

#include "getaccesspreviewresponse.h"
#include "getaccesspreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::GetAccessPreviewResponse
 * \brief The GetAccessPreviewResponse class provides an interace for AccessAnalyzer GetAccessPreview responses.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  Identity and Access Management Access Analyzer helps identify potential resource-access risks by enabling you to
 *  identify any policies that grant access to an external principal. It does this by using logic-based reasoning to analyze
 *  resource-based policies in your Amazon Web Services environment. An external principal can be another Amazon Web
 *  Services account, a root user, an IAM user or role, a federated user, an Amazon Web Services service, or an anonymous
 *  user. You can also use IAM Access Analyzer to preview and validate public and cross-account access to your resources
 *  before deploying permissions changes. This guide describes the Identity and Access Management Access Analyzer operations
 *  that you can call programmatically. For general information about IAM Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">Identity and Access Management
 *  Access Analyzer</a> in the <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using IAM Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::getAccessPreview
 */

/*!
 * Constructs a GetAccessPreviewResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPreviewResponse::GetAccessPreviewResponse(
        const GetAccessPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccessAnalyzerResponse(new GetAccessPreviewResponsePrivate(this), parent)
{
    setRequest(new GetAccessPreviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPreviewRequest * GetAccessPreviewResponse::request() const
{
    Q_D(const GetAccessPreviewResponse);
    return static_cast<const GetAccessPreviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AccessAnalyzer GetAccessPreview \a response.
 */
void GetAccessPreviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AccessAnalyzer::GetAccessPreviewResponsePrivate
 * \brief The GetAccessPreviewResponsePrivate class provides private implementation for GetAccessPreviewResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a GetAccessPreviewResponsePrivate object with public implementation \a q.
 */
GetAccessPreviewResponsePrivate::GetAccessPreviewResponsePrivate(
    GetAccessPreviewResponse * const q) : AccessAnalyzerResponsePrivate(q)
{

}

/*!
 * Parses a AccessAnalyzer GetAccessPreview response element from \a xml.
 */
void GetAccessPreviewResponsePrivate::parseGetAccessPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPreviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AccessAnalyzer
} // namespace QtAws

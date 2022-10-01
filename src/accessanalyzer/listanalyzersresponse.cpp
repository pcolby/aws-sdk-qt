// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanalyzersresponse.h"
#include "listanalyzersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::ListAnalyzersResponse
 * \brief The ListAnalyzersResponse class provides an interace for AccessAnalyzer ListAnalyzers responses.
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
 * \sa AccessAnalyzerClient::listAnalyzers
 */

/*!
 * Constructs a ListAnalyzersResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnalyzersResponse::ListAnalyzersResponse(
        const ListAnalyzersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccessAnalyzerResponse(new ListAnalyzersResponsePrivate(this), parent)
{
    setRequest(new ListAnalyzersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnalyzersRequest * ListAnalyzersResponse::request() const
{
    Q_D(const ListAnalyzersResponse);
    return static_cast<const ListAnalyzersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AccessAnalyzer ListAnalyzers \a response.
 */
void ListAnalyzersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnalyzersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AccessAnalyzer::ListAnalyzersResponsePrivate
 * \brief The ListAnalyzersResponsePrivate class provides private implementation for ListAnalyzersResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a ListAnalyzersResponsePrivate object with public implementation \a q.
 */
ListAnalyzersResponsePrivate::ListAnalyzersResponsePrivate(
    ListAnalyzersResponse * const q) : AccessAnalyzerResponsePrivate(q)
{

}

/*!
 * Parses a AccessAnalyzer ListAnalyzers response element from \a xml.
 */
void ListAnalyzersResponsePrivate::parseListAnalyzersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnalyzersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AccessAnalyzer
} // namespace QtAws

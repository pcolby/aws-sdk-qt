// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchjobsresponse.h"
#include "searchjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchJobsResponse
 * \brief The SearchJobsResponse class provides an interace for Braket SearchJobs responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::searchJobs
 */

/*!
 * Constructs a SearchJobsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchJobsResponse::SearchJobsResponse(
        const SearchJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new SearchJobsResponsePrivate(this), parent)
{
    setRequest(new SearchJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchJobsRequest * SearchJobsResponse::request() const
{
    Q_D(const SearchJobsResponse);
    return static_cast<const SearchJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket SearchJobs \a response.
 */
void SearchJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::SearchJobsResponsePrivate
 * \brief The SearchJobsResponsePrivate class provides private implementation for SearchJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchJobsResponsePrivate object with public implementation \a q.
 */
SearchJobsResponsePrivate::SearchJobsResponsePrivate(
    SearchJobsResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket SearchJobs response element from \a xml.
 */
void SearchJobsResponsePrivate::parseSearchJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws

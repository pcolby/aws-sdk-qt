/*
    Copyright 2013-2018 Paul Colby

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

#include "getnamedqueryresponse.h"
#include "getnamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::GetNamedQueryResponse
 * \brief The GetNamedQueryResponse class provides an interace for Athena GetNamedQuery responses.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::getNamedQuery
 */

/*!
 * Constructs a GetNamedQueryResponse object for \a reply to \a request, with parent \a parent.
 */
GetNamedQueryResponse::GetNamedQueryResponse(
        const GetNamedQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new GetNamedQueryResponsePrivate(this), parent)
{
    setRequest(new GetNamedQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNamedQueryRequest * GetNamedQueryResponse::request() const
{
    Q_D(const GetNamedQueryResponse);
    return static_cast<const GetNamedQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Athena GetNamedQuery \a response.
 */
void GetNamedQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNamedQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Athena::GetNamedQueryResponsePrivate
 * \brief The GetNamedQueryResponsePrivate class provides private implementation for GetNamedQueryResponse.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a GetNamedQueryResponsePrivate object with public implementation \a q.
 */
GetNamedQueryResponsePrivate::GetNamedQueryResponsePrivate(
    GetNamedQueryResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * Parses a Athena GetNamedQuery response element from \a xml.
 */
void GetNamedQueryResponsePrivate::parseGetNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamedQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Athena
} // namespace QtAws

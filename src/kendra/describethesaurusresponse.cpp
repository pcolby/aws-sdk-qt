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

#include "describethesaurusresponse.h"
#include "describethesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeThesaurusResponse
 * \brief The DescribeThesaurusResponse class provides an interace for Kendra DescribeThesaurus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeThesaurus
 */

/*!
 * Constructs a DescribeThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThesaurusResponse::DescribeThesaurusResponse(
        const DescribeThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeThesaurusResponsePrivate(this), parent)
{
    setRequest(new DescribeThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThesaurusRequest * DescribeThesaurusResponse::request() const
{
    Q_D(const DescribeThesaurusResponse);
    return static_cast<const DescribeThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeThesaurus \a response.
 */
void DescribeThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeThesaurusResponsePrivate
 * \brief The DescribeThesaurusResponsePrivate class provides private implementation for DescribeThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeThesaurusResponsePrivate object with public implementation \a q.
 */
DescribeThesaurusResponsePrivate::DescribeThesaurusResponsePrivate(
    DescribeThesaurusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeThesaurus response element from \a xml.
 */
void DescribeThesaurusResponsePrivate::parseDescribeThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

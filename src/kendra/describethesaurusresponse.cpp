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
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeThesaurusResponse
 * \brief The DescribeThesaurusResponse class provides an interace for kendra DescribeThesaurus responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeThesaurus
 */

/*!
 * Constructs a DescribeThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThesaurusResponse::DescribeThesaurusResponse(
        const DescribeThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DescribeThesaurusResponsePrivate(this), parent)
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
 * Parses a successful kendra DescribeThesaurus \a response.
 */
void DescribeThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DescribeThesaurusResponsePrivate
 * \brief The DescribeThesaurusResponsePrivate class provides private implementation for DescribeThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeThesaurusResponsePrivate object with public implementation \a q.
 */
DescribeThesaurusResponsePrivate::DescribeThesaurusResponsePrivate(
    DescribeThesaurusResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DescribeThesaurus response element from \a xml.
 */
void DescribeThesaurusResponsePrivate::parseDescribeThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws

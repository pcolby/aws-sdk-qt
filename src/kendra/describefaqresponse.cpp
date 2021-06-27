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

#include "describefaqresponse.h"
#include "describefaqresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeFaqResponse
 * \brief The DescribeFaqResponse class provides an interace for kendra DescribeFaq responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeFaq
 */

/*!
 * Constructs a DescribeFaqResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFaqResponse::DescribeFaqResponse(
        const DescribeFaqRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DescribeFaqResponsePrivate(this), parent)
{
    setRequest(new DescribeFaqRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFaqRequest * DescribeFaqResponse::request() const
{
    return static_cast<const DescribeFaqRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra DescribeFaq \a response.
 */
void DescribeFaqResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFaqResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DescribeFaqResponsePrivate
 * \brief The DescribeFaqResponsePrivate class provides private implementation for DescribeFaqResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeFaqResponsePrivate object with public implementation \a q.
 */
DescribeFaqResponsePrivate::DescribeFaqResponsePrivate(
    DescribeFaqResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DescribeFaq response element from \a xml.
 */
void DescribeFaqResponsePrivate::parseDescribeFaqResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFaqResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws

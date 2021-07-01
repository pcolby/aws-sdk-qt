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

#include "searchdevicesresponse.h"
#include "searchdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchDevicesResponse
 * \brief The SearchDevicesResponse class provides an interace for Braket SearchDevices responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::searchDevices
 */

/*!
 * Constructs a SearchDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchDevicesResponse::SearchDevicesResponse(
        const SearchDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new SearchDevicesResponsePrivate(this), parent)
{
    setRequest(new SearchDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchDevicesRequest * SearchDevicesResponse::request() const
{
    Q_D(const SearchDevicesResponse);
    return static_cast<const SearchDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket SearchDevices \a response.
 */
void SearchDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::SearchDevicesResponsePrivate
 * \brief The SearchDevicesResponsePrivate class provides private implementation for SearchDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchDevicesResponsePrivate object with public implementation \a q.
 */
SearchDevicesResponsePrivate::SearchDevicesResponsePrivate(
    SearchDevicesResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket SearchDevices response element from \a xml.
 */
void SearchDevicesResponsePrivate::parseSearchDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws

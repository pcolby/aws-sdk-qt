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

#include "liststudiosresponse.h"
#include "liststudiosresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListStudiosResponse
 * \brief The ListStudiosResponse class provides an interace for EMR ListStudios responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listStudios
 */

/*!
 * Constructs a ListStudiosResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudiosResponse::ListStudiosResponse(
        const ListStudiosRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStudiosResponsePrivate(this), parent)
{
    setRequest(new ListStudiosRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudiosRequest * ListStudiosResponse::request() const
{
    return static_cast<const ListStudiosRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR ListStudios \a response.
 */
void ListStudiosResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudiosResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListStudiosResponsePrivate
 * \brief The ListStudiosResponsePrivate class provides private implementation for ListStudiosResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListStudiosResponsePrivate object with public implementation \a q.
 */
ListStudiosResponsePrivate::ListStudiosResponsePrivate(
    ListStudiosResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListStudios response element from \a xml.
 */
void ListStudiosResponsePrivate::parseListStudiosResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudiosResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws

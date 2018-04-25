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

#include "liststepsresponse.h"
#include "liststepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListStepsResponse
 * \brief The ListStepsResponse class provides an interace for EMR ListSteps responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listSteps
 */

/*!
 * Constructs a ListStepsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStepsResponse::ListStepsResponse(
        const ListStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStepsResponsePrivate(this), parent)
{
    setRequest(new ListStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStepsRequest * ListStepsResponse::request() const
{
    Q_D(const ListStepsResponse);
    return static_cast<const ListStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ListSteps \a response.
 */
void ListStepsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListStepsResponsePrivate
 * \brief The ListStepsResponsePrivate class provides private implementation for ListStepsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListStepsResponsePrivate object with public implementation \a q.
 */
ListStepsResponsePrivate::ListStepsResponsePrivate(
    ListStepsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListSteps response element from \a xml.
 */
void ListStepsResponsePrivate::parseListStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStepsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws

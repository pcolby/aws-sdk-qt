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

#include "stopcontactresponse.h"
#include "stopcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StopContactResponse
 * \brief The StopContactResponse class provides an interace for Connect StopContact responses.
 *
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 *
 * \sa ConnectClient::stopContact
 */

/*!
 * Constructs a StopContactResponse object for \a reply to \a request, with parent \a parent.
 */
StopContactResponse::StopContactResponse(
        const StopContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new StopContactResponsePrivate(this), parent)
{
    setRequest(new StopContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopContactRequest * StopContactResponse::request() const
{
    Q_D(const StopContactResponse);
    return static_cast<const StopContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect StopContact \a response.
 */
void StopContactResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::StopContactResponsePrivate
 * \brief The StopContactResponsePrivate class provides private implementation for StopContactResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a StopContactResponsePrivate object with public implementation \a q.
 */
StopContactResponsePrivate::StopContactResponsePrivate(
    StopContactResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect StopContact response element from \a xml.
 */
void StopContactResponsePrivate::parseStopContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopContactResponse"));
    /// @todo
}

} // namespace Connect
} // namespace QtAws

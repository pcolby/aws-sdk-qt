/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletehitresponse.h"
#include "deletehitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteHITResponse
 * \brief The DeleteHITResponse class provides an interace for MTurk DeleteHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteHIT
 */

/*!
 * Constructs a DeleteHITResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHITResponse::DeleteHITResponse(
        const DeleteHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteHITResponsePrivate(this), parent)
{
    setRequest(new DeleteHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHITRequest * DeleteHITResponse::request() const
{
    Q_D(const DeleteHITResponse);
    return static_cast<const DeleteHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk DeleteHIT \a response.
 */
void DeleteHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DeleteHITResponsePrivate
 * \brief The DeleteHITResponsePrivate class provides private implementation for DeleteHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteHITResponsePrivate object with public implementation \a q.
 */
DeleteHITResponsePrivate::DeleteHITResponsePrivate(
    DeleteHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DeleteHIT response element from \a xml.
 */
void DeleteHITResponsePrivate::parseDeleteHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws

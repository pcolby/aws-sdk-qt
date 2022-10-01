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

#include "deletesessionresponse.h"
#include "deletesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSessionResponse
 * \brief The DeleteSessionResponse class provides an interace for Glue DeleteSession responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSession
 */

/*!
 * Constructs a DeleteSessionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSessionResponse::DeleteSessionResponse(
        const DeleteSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSessionRequest * DeleteSessionResponse::request() const
{
    Q_D(const DeleteSessionResponse);
    return static_cast<const DeleteSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteSession \a response.
 */
void DeleteSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteSessionResponsePrivate
 * \brief The DeleteSessionResponsePrivate class provides private implementation for DeleteSessionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSessionResponsePrivate object with public implementation \a q.
 */
DeleteSessionResponsePrivate::DeleteSessionResponsePrivate(
    DeleteSessionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteSession response element from \a xml.
 */
void DeleteSessionResponsePrivate::parseDeleteSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

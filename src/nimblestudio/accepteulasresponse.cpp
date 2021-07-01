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

#include "accepteulasresponse.h"
#include "accepteulasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::AcceptEulasResponse
 * \brief The AcceptEulasResponse class provides an interace for NimbleStudio AcceptEulas responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::acceptEulas
 */

/*!
 * Constructs a AcceptEulasResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptEulasResponse::AcceptEulasResponse(
        const AcceptEulasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new AcceptEulasResponsePrivate(this), parent)
{
    setRequest(new AcceptEulasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptEulasRequest * AcceptEulasResponse::request() const
{
    Q_D(const AcceptEulasResponse);
    return static_cast<const AcceptEulasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio AcceptEulas \a response.
 */
void AcceptEulasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptEulasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::AcceptEulasResponsePrivate
 * \brief The AcceptEulasResponsePrivate class provides private implementation for AcceptEulasResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a AcceptEulasResponsePrivate object with public implementation \a q.
 */
AcceptEulasResponsePrivate::AcceptEulasResponsePrivate(
    AcceptEulasResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio AcceptEulas response element from \a xml.
 */
void AcceptEulasResponsePrivate::parseAcceptEulasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptEulasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

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

#include "startcutoverresponse.h"
#include "startcutoverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::StartCutoverResponse
 * \brief The StartCutoverResponse class provides an interace for mgn StartCutover responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::startCutover
 */

/*!
 * Constructs a StartCutoverResponse object for \a reply to \a request, with parent \a parent.
 */
StartCutoverResponse::StartCutoverResponse(
        const StartCutoverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new StartCutoverResponsePrivate(this), parent)
{
    setRequest(new StartCutoverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCutoverRequest * StartCutoverResponse::request() const
{
    Q_D(const StartCutoverResponse);
    return static_cast<const StartCutoverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn StartCutover \a response.
 */
void StartCutoverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCutoverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::StartCutoverResponsePrivate
 * \brief The StartCutoverResponsePrivate class provides private implementation for StartCutoverResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a StartCutoverResponsePrivate object with public implementation \a q.
 */
StartCutoverResponsePrivate::StartCutoverResponsePrivate(
    StartCutoverResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn StartCutover response element from \a xml.
 */
void StartCutoverResponsePrivate::parseStartCutoverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCutoverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws

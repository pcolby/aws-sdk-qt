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

#include "finalizecutoverresponse.h"
#include "finalizecutoverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::FinalizeCutoverResponse
 * \brief The FinalizeCutoverResponse class provides an interace for mgn FinalizeCutover responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::finalizeCutover
 */

/*!
 * Constructs a FinalizeCutoverResponse object for \a reply to \a request, with parent \a parent.
 */
FinalizeCutoverResponse::FinalizeCutoverResponse(
        const FinalizeCutoverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new FinalizeCutoverResponsePrivate(this), parent)
{
    setRequest(new FinalizeCutoverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FinalizeCutoverRequest * FinalizeCutoverResponse::request() const
{
    Q_D(const FinalizeCutoverResponse);
    return static_cast<const FinalizeCutoverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn FinalizeCutover \a response.
 */
void FinalizeCutoverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FinalizeCutoverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::FinalizeCutoverResponsePrivate
 * \brief The FinalizeCutoverResponsePrivate class provides private implementation for FinalizeCutoverResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a FinalizeCutoverResponsePrivate object with public implementation \a q.
 */
FinalizeCutoverResponsePrivate::FinalizeCutoverResponsePrivate(
    FinalizeCutoverResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn FinalizeCutover response element from \a xml.
 */
void FinalizeCutoverResponsePrivate::parseFinalizeCutoverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FinalizeCutoverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws

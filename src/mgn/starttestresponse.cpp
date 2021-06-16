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

#include "starttestresponse.h"
#include "starttestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::StartTestResponse
 * \brief The StartTestResponse class provides an interace for mgn StartTest responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::startTest
 */

/*!
 * Constructs a StartTestResponse object for \a reply to \a request, with parent \a parent.
 */
StartTestResponse::StartTestResponse(
        const StartTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new StartTestResponsePrivate(this), parent)
{
    setRequest(new StartTestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTestRequest * StartTestResponse::request() const
{
    Q_D(const StartTestResponse);
    return static_cast<const StartTestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn StartTest \a response.
 */
void StartTestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::StartTestResponsePrivate
 * \brief The StartTestResponsePrivate class provides private implementation for StartTestResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a StartTestResponsePrivate object with public implementation \a q.
 */
StartTestResponsePrivate::StartTestResponsePrivate(
    StartTestResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn StartTest response element from \a xml.
 */
void StartTestResponsePrivate::parseStartTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws

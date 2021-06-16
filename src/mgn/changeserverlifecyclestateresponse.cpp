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

#include "changeserverlifecyclestateresponse.h"
#include "changeserverlifecyclestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::ChangeServerLifeCycleStateResponse
 * \brief The ChangeServerLifeCycleStateResponse class provides an interace for mgn ChangeServerLifeCycleState responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::changeServerLifeCycleState
 */

/*!
 * Constructs a ChangeServerLifeCycleStateResponse object for \a reply to \a request, with parent \a parent.
 */
ChangeServerLifeCycleStateResponse::ChangeServerLifeCycleStateResponse(
        const ChangeServerLifeCycleStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new ChangeServerLifeCycleStateResponsePrivate(this), parent)
{
    setRequest(new ChangeServerLifeCycleStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangeServerLifeCycleStateRequest * ChangeServerLifeCycleStateResponse::request() const
{
    Q_D(const ChangeServerLifeCycleStateResponse);
    return static_cast<const ChangeServerLifeCycleStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn ChangeServerLifeCycleState \a response.
 */
void ChangeServerLifeCycleStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangeServerLifeCycleStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::ChangeServerLifeCycleStateResponsePrivate
 * \brief The ChangeServerLifeCycleStateResponsePrivate class provides private implementation for ChangeServerLifeCycleStateResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a ChangeServerLifeCycleStateResponsePrivate object with public implementation \a q.
 */
ChangeServerLifeCycleStateResponsePrivate::ChangeServerLifeCycleStateResponsePrivate(
    ChangeServerLifeCycleStateResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn ChangeServerLifeCycleState response element from \a xml.
 */
void ChangeServerLifeCycleStateResponsePrivate::parseChangeServerLifeCycleStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeServerLifeCycleStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws

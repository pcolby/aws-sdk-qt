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

#include "terminatetargetinstancesresponse.h"
#include "terminatetargetinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::TerminateTargetInstancesResponse
 * \brief The TerminateTargetInstancesResponse class provides an interace for mgn TerminateTargetInstances responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::terminateTargetInstances
 */

/*!
 * Constructs a TerminateTargetInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateTargetInstancesResponse::TerminateTargetInstancesResponse(
        const TerminateTargetInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new TerminateTargetInstancesResponsePrivate(this), parent)
{
    setRequest(new TerminateTargetInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateTargetInstancesRequest * TerminateTargetInstancesResponse::request() const
{
    Q_D(const TerminateTargetInstancesResponse);
    return static_cast<const TerminateTargetInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn TerminateTargetInstances \a response.
 */
void TerminateTargetInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateTargetInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::TerminateTargetInstancesResponsePrivate
 * \brief The TerminateTargetInstancesResponsePrivate class provides private implementation for TerminateTargetInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a TerminateTargetInstancesResponsePrivate object with public implementation \a q.
 */
TerminateTargetInstancesResponsePrivate::TerminateTargetInstancesResponsePrivate(
    TerminateTargetInstancesResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn TerminateTargetInstances response element from \a xml.
 */
void TerminateTargetInstancesResponsePrivate::parseTerminateTargetInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateTargetInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws

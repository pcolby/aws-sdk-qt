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

#include "updatestudioresponse.h"
#include "updatestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::UpdateStudioResponse
 * \brief The UpdateStudioResponse class provides an interace for EMR UpdateStudio responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::updateStudio
 */

/*!
 * Constructs a UpdateStudioResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioResponse::UpdateStudioResponse(
        const UpdateStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new UpdateStudioResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioRequest * UpdateStudioResponse::request() const
{
    Q_D(const UpdateStudioResponse);
    return static_cast<const UpdateStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR UpdateStudio \a response.
 */
void UpdateStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::UpdateStudioResponsePrivate
 * \brief The UpdateStudioResponsePrivate class provides private implementation for UpdateStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a UpdateStudioResponsePrivate object with public implementation \a q.
 */
UpdateStudioResponsePrivate::UpdateStudioResponsePrivate(
    UpdateStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR UpdateStudio response element from \a xml.
 */
void UpdateStudioResponsePrivate::parseUpdateStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws

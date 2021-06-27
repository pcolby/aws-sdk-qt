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

#include "createstudioresponse.h"
#include "createstudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::CreateStudioResponse
 * \brief The CreateStudioResponse class provides an interace for EMR CreateStudio responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createStudio
 */

/*!
 * Constructs a CreateStudioResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioResponse::CreateStudioResponse(
        const CreateStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new CreateStudioResponsePrivate(this), parent)
{
    setRequest(new CreateStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioRequest * CreateStudioResponse::request() const
{
    return static_cast<const CreateStudioRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR CreateStudio \a response.
 */
void CreateStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::CreateStudioResponsePrivate
 * \brief The CreateStudioResponsePrivate class provides private implementation for CreateStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a CreateStudioResponsePrivate object with public implementation \a q.
 */
CreateStudioResponsePrivate::CreateStudioResponsePrivate(
    CreateStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR CreateStudio response element from \a xml.
 */
void CreateStudioResponsePrivate::parseCreateStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws

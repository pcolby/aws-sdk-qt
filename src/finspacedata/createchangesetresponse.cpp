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

#include "createchangesetresponse.h"
#include "createchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::CreateChangesetResponse
 * \brief The CreateChangesetResponse class provides an interace for FinSpaceData CreateChangeset responses.
 *
 * \inmodule QtAwsFinSpaceData
 *
 *  The FinSpace APIs let you take actions inside the FinSpace environment.
 *
 * \sa FinSpaceDataClient::createChangeset
 */

/*!
 * Constructs a CreateChangesetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChangesetResponse::CreateChangesetResponse(
        const CreateChangesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinSpaceDataResponse(new CreateChangesetResponsePrivate(this), parent)
{
    setRequest(new CreateChangesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChangesetRequest * CreateChangesetResponse::request() const
{
    return static_cast<const CreateChangesetRequest *>(FinSpaceDataResponse::request());
}

/*!
 * \reimp
 * Parses a successful FinSpaceData CreateChangeset \a response.
 */
void CreateChangesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChangesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinSpaceData::CreateChangesetResponsePrivate
 * \brief The CreateChangesetResponsePrivate class provides private implementation for CreateChangesetResponse.
 * \internal
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a CreateChangesetResponsePrivate object with public implementation \a q.
 */
CreateChangesetResponsePrivate::CreateChangesetResponsePrivate(
    CreateChangesetResponse * const q) : FinSpaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinSpaceData CreateChangeset response element from \a xml.
 */
void CreateChangesetResponsePrivate::parseCreateChangesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChangesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinSpaceData
} // namespace QtAws

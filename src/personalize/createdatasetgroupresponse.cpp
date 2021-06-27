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

#include "createdatasetgroupresponse.h"
#include "createdatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetGroupResponse
 * \brief The CreateDatasetGroupResponse class provides an interace for Personalize CreateDatasetGroup responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetGroup
 */

/*!
 * Constructs a CreateDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetGroupResponse::CreateDatasetGroupResponse(
        const CreateDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetGroupRequest * CreateDatasetGroupResponse::request() const
{
    return static_cast<const CreateDatasetGroupRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize CreateDatasetGroup \a response.
 */
void CreateDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateDatasetGroupResponsePrivate
 * \brief The CreateDatasetGroupResponsePrivate class provides private implementation for CreateDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetGroupResponsePrivate object with public implementation \a q.
 */
CreateDatasetGroupResponsePrivate::CreateDatasetGroupResponsePrivate(
    CreateDatasetGroupResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateDatasetGroup response element from \a xml.
 */
void CreateDatasetGroupResponsePrivate::parseCreateDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

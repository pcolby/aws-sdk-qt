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

#include "createexperienceresponse.h"
#include "createexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateExperienceResponse
 * \brief The CreateExperienceResponse class provides an interace for Kendra CreateExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createExperience
 */

/*!
 * Constructs a CreateExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExperienceResponse::CreateExperienceResponse(
        const CreateExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateExperienceResponsePrivate(this), parent)
{
    setRequest(new CreateExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExperienceRequest * CreateExperienceResponse::request() const
{
    Q_D(const CreateExperienceResponse);
    return static_cast<const CreateExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateExperience \a response.
 */
void CreateExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateExperienceResponsePrivate
 * \brief The CreateExperienceResponsePrivate class provides private implementation for CreateExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateExperienceResponsePrivate object with public implementation \a q.
 */
CreateExperienceResponsePrivate::CreateExperienceResponsePrivate(
    CreateExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateExperience response element from \a xml.
 */
void CreateExperienceResponsePrivate::parseCreateExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

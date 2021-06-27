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

#include "createsolutionresponse.h"
#include "createsolutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionResponse
 * \brief The CreateSolutionResponse class provides an interace for Personalize CreateSolution responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolution
 */

/*!
 * Constructs a CreateSolutionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSolutionResponse::CreateSolutionResponse(
        const CreateSolutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateSolutionResponsePrivate(this), parent)
{
    setRequest(new CreateSolutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSolutionRequest * CreateSolutionResponse::request() const
{
    return static_cast<const CreateSolutionRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize CreateSolution \a response.
 */
void CreateSolutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSolutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateSolutionResponsePrivate
 * \brief The CreateSolutionResponsePrivate class provides private implementation for CreateSolutionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionResponsePrivate object with public implementation \a q.
 */
CreateSolutionResponsePrivate::CreateSolutionResponsePrivate(
    CreateSolutionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateSolution response element from \a xml.
 */
void CreateSolutionResponsePrivate::parseCreateSolutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSolutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

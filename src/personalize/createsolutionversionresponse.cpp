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

#include "createsolutionversionresponse.h"
#include "createsolutionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionVersionResponse
 * \brief The CreateSolutionVersionResponse class provides an interace for Personalize CreateSolutionVersion responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolutionVersion
 */

/*!
 * Constructs a CreateSolutionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSolutionVersionResponse::CreateSolutionVersionResponse(
        const CreateSolutionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateSolutionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSolutionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSolutionVersionRequest * CreateSolutionVersionResponse::request() const
{
    Q_D(const CreateSolutionVersionResponse);
    return static_cast<const CreateSolutionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateSolutionVersion \a response.
 */
void CreateSolutionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSolutionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateSolutionVersionResponsePrivate
 * \brief The CreateSolutionVersionResponsePrivate class provides private implementation for CreateSolutionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionVersionResponsePrivate object with public implementation \a q.
 */
CreateSolutionVersionResponsePrivate::CreateSolutionVersionResponsePrivate(
    CreateSolutionVersionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateSolutionVersion response element from \a xml.
 */
void CreateSolutionVersionResponsePrivate::parseCreateSolutionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSolutionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

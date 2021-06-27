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

#include "createfilterresponse.h"
#include "createfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateFilterResponse
 * \brief The CreateFilterResponse class provides an interace for Personalize CreateFilter responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createFilter
 */

/*!
 * Constructs a CreateFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFilterResponse::CreateFilterResponse(
        const CreateFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateFilterResponsePrivate(this), parent)
{
    setRequest(new CreateFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFilterRequest * CreateFilterResponse::request() const
{
    return static_cast<const CreateFilterRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize CreateFilter \a response.
 */
void CreateFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateFilterResponsePrivate
 * \brief The CreateFilterResponsePrivate class provides private implementation for CreateFilterResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateFilterResponsePrivate object with public implementation \a q.
 */
CreateFilterResponsePrivate::CreateFilterResponsePrivate(
    CreateFilterResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateFilter response element from \a xml.
 */
void CreateFilterResponsePrivate::parseCreateFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

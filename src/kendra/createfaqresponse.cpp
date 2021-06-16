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

#include "createfaqresponse.h"
#include "createfaqresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::CreateFaqResponse
 * \brief The CreateFaqResponse class provides an interace for kendra CreateFaq responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::createFaq
 */

/*!
 * Constructs a CreateFaqResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFaqResponse::CreateFaqResponse(
        const CreateFaqRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new CreateFaqResponsePrivate(this), parent)
{
    setRequest(new CreateFaqRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFaqRequest * CreateFaqResponse::request() const
{
    Q_D(const CreateFaqResponse);
    return static_cast<const CreateFaqRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful kendra CreateFaq \a response.
 */
void CreateFaqResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFaqResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::CreateFaqResponsePrivate
 * \brief The CreateFaqResponsePrivate class provides private implementation for CreateFaqResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a CreateFaqResponsePrivate object with public implementation \a q.
 */
CreateFaqResponsePrivate::CreateFaqResponsePrivate(
    CreateFaqResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra CreateFaq response element from \a xml.
 */
void CreateFaqResponsePrivate::parseCreateFaqResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFaqResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws

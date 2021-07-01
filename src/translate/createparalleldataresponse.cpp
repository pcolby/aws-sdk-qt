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

#include "createparalleldataresponse.h"
#include "createparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::CreateParallelDataResponse
 * \brief The CreateParallelDataResponse class provides an interace for Translate CreateParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::createParallelData
 */

/*!
 * Constructs a CreateParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
CreateParallelDataResponse::CreateParallelDataResponse(
        const CreateParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new CreateParallelDataResponsePrivate(this), parent)
{
    setRequest(new CreateParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateParallelDataRequest * CreateParallelDataResponse::request() const
{
    Q_D(const CreateParallelDataResponse);
    return static_cast<const CreateParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate CreateParallelData \a response.
 */
void CreateParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::CreateParallelDataResponsePrivate
 * \brief The CreateParallelDataResponsePrivate class provides private implementation for CreateParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a CreateParallelDataResponsePrivate object with public implementation \a q.
 */
CreateParallelDataResponsePrivate::CreateParallelDataResponsePrivate(
    CreateParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate CreateParallelData response element from \a xml.
 */
void CreateParallelDataResponsePrivate::parseCreateParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws

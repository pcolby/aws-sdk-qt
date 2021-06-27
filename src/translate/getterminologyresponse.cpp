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

#include "getterminologyresponse.h"
#include "getterminologyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetTerminologyResponse
 * \brief The GetTerminologyResponse class provides an interace for Translate GetTerminology responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getTerminology
 */

/*!
 * Constructs a GetTerminologyResponse object for \a reply to \a request, with parent \a parent.
 */
GetTerminologyResponse::GetTerminologyResponse(
        const GetTerminologyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new GetTerminologyResponsePrivate(this), parent)
{
    setRequest(new GetTerminologyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTerminologyRequest * GetTerminologyResponse::request() const
{
    return static_cast<const GetTerminologyRequest *>(TranslateResponse::request());
}

/*!
 * \reimp
 * Parses a successful Translate GetTerminology \a response.
 */
void GetTerminologyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTerminologyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::GetTerminologyResponsePrivate
 * \brief The GetTerminologyResponsePrivate class provides private implementation for GetTerminologyResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetTerminologyResponsePrivate object with public implementation \a q.
 */
GetTerminologyResponsePrivate::GetTerminologyResponsePrivate(
    GetTerminologyResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate GetTerminology response element from \a xml.
 */
void GetTerminologyResponsePrivate::parseGetTerminologyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTerminologyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws

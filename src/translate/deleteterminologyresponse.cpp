/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteterminologyresponse.h"
#include "deleteterminologyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteTerminologyResponse
 * \brief The DeleteTerminologyResponse class provides an interace for Translate DeleteTerminology responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteTerminology
 */

/*!
 * Constructs a DeleteTerminologyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTerminologyResponse::DeleteTerminologyResponse(
        const DeleteTerminologyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new DeleteTerminologyResponsePrivate(this), parent)
{
    setRequest(new DeleteTerminologyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTerminologyRequest * DeleteTerminologyResponse::request() const
{
    Q_D(const DeleteTerminologyResponse);
    return static_cast<const DeleteTerminologyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate DeleteTerminology \a response.
 */
void DeleteTerminologyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTerminologyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::DeleteTerminologyResponsePrivate
 * \brief The DeleteTerminologyResponsePrivate class provides private implementation for DeleteTerminologyResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteTerminologyResponsePrivate object with public implementation \a q.
 */
DeleteTerminologyResponsePrivate::DeleteTerminologyResponsePrivate(
    DeleteTerminologyResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate DeleteTerminology response element from \a xml.
 */
void DeleteTerminologyResponsePrivate::parseDeleteTerminologyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTerminologyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws

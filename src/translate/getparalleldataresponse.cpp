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

#include "getparalleldataresponse.h"
#include "getparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetParallelDataResponse
 * \brief The GetParallelDataResponse class provides an interace for Translate GetParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getParallelData
 */

/*!
 * Constructs a GetParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetParallelDataResponse::GetParallelDataResponse(
        const GetParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new GetParallelDataResponsePrivate(this), parent)
{
    setRequest(new GetParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetParallelDataRequest * GetParallelDataResponse::request() const
{
    Q_D(const GetParallelDataResponse);
    return static_cast<const GetParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate GetParallelData \a response.
 */
void GetParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::GetParallelDataResponsePrivate
 * \brief The GetParallelDataResponsePrivate class provides private implementation for GetParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetParallelDataResponsePrivate object with public implementation \a q.
 */
GetParallelDataResponsePrivate::GetParallelDataResponsePrivate(
    GetParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate GetParallelData response element from \a xml.
 */
void GetParallelDataResponsePrivate::parseGetParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws

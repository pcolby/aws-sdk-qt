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

#include "updateparalleldataresponse.h"
#include "updateparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::UpdateParallelDataResponse
 * \brief The UpdateParallelDataResponse class provides an interace for Translate UpdateParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::updateParallelData
 */

/*!
 * Constructs a UpdateParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateParallelDataResponse::UpdateParallelDataResponse(
        const UpdateParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new UpdateParallelDataResponsePrivate(this), parent)
{
    setRequest(new UpdateParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateParallelDataRequest * UpdateParallelDataResponse::request() const
{
    Q_D(const UpdateParallelDataResponse);
    return static_cast<const UpdateParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate UpdateParallelData \a response.
 */
void UpdateParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::UpdateParallelDataResponsePrivate
 * \brief The UpdateParallelDataResponsePrivate class provides private implementation for UpdateParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a UpdateParallelDataResponsePrivate object with public implementation \a q.
 */
UpdateParallelDataResponsePrivate::UpdateParallelDataResponsePrivate(
    UpdateParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate UpdateParallelData response element from \a xml.
 */
void UpdateParallelDataResponsePrivate::parseUpdateParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws

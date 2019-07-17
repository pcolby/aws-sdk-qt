/*
    Copyright 2013-2019 Paul Colby

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

#include "deletepresetresponse.h"
#include "deletepresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeletePresetResponse
 * \brief The DeletePresetResponse class provides an interace for MediaConvert DeletePreset responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deletePreset
 */

/*!
 * Constructs a DeletePresetResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePresetResponse::DeletePresetResponse(
        const DeletePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeletePresetResponsePrivate(this), parent)
{
    setRequest(new DeletePresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePresetRequest * DeletePresetResponse::request() const
{
    Q_D(const DeletePresetResponse);
    return static_cast<const DeletePresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert DeletePreset \a response.
 */
void DeletePresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::DeletePresetResponsePrivate
 * \brief The DeletePresetResponsePrivate class provides private implementation for DeletePresetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeletePresetResponsePrivate object with public implementation \a q.
 */
DeletePresetResponsePrivate::DeletePresetResponsePrivate(
    DeletePresetResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert DeletePreset response element from \a xml.
 */
void DeletePresetResponsePrivate::parseDeletePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

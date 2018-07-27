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

#include "getpresetresponse.h"
#include "getpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetPresetResponse
 * \brief The GetPresetResponse class provides an interace for MediaConvert GetPreset responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getPreset
 */

/*!
 * Constructs a GetPresetResponse object for \a reply to \a request, with parent \a parent.
 */
GetPresetResponse::GetPresetResponse(
        const GetPresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetPresetResponsePrivate(this), parent)
{
    setRequest(new GetPresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPresetRequest * GetPresetResponse::request() const
{
    Q_D(const GetPresetResponse);
    return static_cast<const GetPresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert GetPreset \a response.
 */
void GetPresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::GetPresetResponsePrivate
 * \brief The GetPresetResponsePrivate class provides private implementation for GetPresetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetPresetResponsePrivate object with public implementation \a q.
 */
GetPresetResponsePrivate::GetPresetResponsePrivate(
    GetPresetResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert GetPreset response element from \a xml.
 */
void GetPresetResponsePrivate::parseGetPresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

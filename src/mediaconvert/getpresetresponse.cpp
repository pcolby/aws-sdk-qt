// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

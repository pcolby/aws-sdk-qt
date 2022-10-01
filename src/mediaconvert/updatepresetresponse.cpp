// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepresetresponse.h"
#include "updatepresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdatePresetResponse
 * \brief The UpdatePresetResponse class provides an interace for MediaConvert UpdatePreset responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::updatePreset
 */

/*!
 * Constructs a UpdatePresetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePresetResponse::UpdatePresetResponse(
        const UpdatePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new UpdatePresetResponsePrivate(this), parent)
{
    setRequest(new UpdatePresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePresetRequest * UpdatePresetResponse::request() const
{
    Q_D(const UpdatePresetResponse);
    return static_cast<const UpdatePresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert UpdatePreset \a response.
 */
void UpdatePresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::UpdatePresetResponsePrivate
 * \brief The UpdatePresetResponsePrivate class provides private implementation for UpdatePresetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a UpdatePresetResponsePrivate object with public implementation \a q.
 */
UpdatePresetResponsePrivate::UpdatePresetResponsePrivate(
    UpdatePresetResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert UpdatePreset response element from \a xml.
 */
void UpdatePresetResponsePrivate::parseUpdatePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

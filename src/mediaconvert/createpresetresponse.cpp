// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresetresponse.h"
#include "createpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreatePresetResponse
 * \brief The CreatePresetResponse class provides an interace for MediaConvert CreatePreset responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createPreset
 */

/*!
 * Constructs a CreatePresetResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePresetResponse::CreatePresetResponse(
        const CreatePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CreatePresetResponsePrivate(this), parent)
{
    setRequest(new CreatePresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePresetRequest * CreatePresetResponse::request() const
{
    Q_D(const CreatePresetResponse);
    return static_cast<const CreatePresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert CreatePreset \a response.
 */
void CreatePresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::CreatePresetResponsePrivate
 * \brief The CreatePresetResponsePrivate class provides private implementation for CreatePresetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreatePresetResponsePrivate object with public implementation \a q.
 */
CreatePresetResponsePrivate::CreatePresetResponsePrivate(
    CreatePresetResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert CreatePreset response element from \a xml.
 */
void CreatePresetResponsePrivate::parseCreatePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

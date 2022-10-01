// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRESETRESPONSE_H
#define QTAWS_UPDATEPRESETRESPONSE_H

#include "mediaconvertresponse.h"
#include "updatepresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdatePresetResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT UpdatePresetResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    UpdatePresetResponse(const UpdatePresetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePresetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePresetResponse)
    Q_DISABLE_COPY(UpdatePresetResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

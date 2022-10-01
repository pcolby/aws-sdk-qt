// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRESETRESPONSE_H
#define QTAWS_GETPRESETRESPONSE_H

#include "mediaconvertresponse.h"
#include "getpresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class GetPresetResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT GetPresetResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    GetPresetResponse(const GetPresetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPresetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPresetResponse)
    Q_DISABLE_COPY(GetPresetResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

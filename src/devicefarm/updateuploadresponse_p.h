// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUPLOADRESPONSE_P_H
#define QTAWS_UPDATEUPLOADRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateUploadResponse;

class UpdateUploadResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit UpdateUploadResponsePrivate(UpdateUploadResponse * const q);

    void parseUpdateUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUploadResponse)
    Q_DISABLE_COPY(UpdateUploadResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

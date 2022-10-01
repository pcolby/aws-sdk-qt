// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADRESPONSE_P_H
#define QTAWS_GETUPLOADRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetUploadResponse;

class GetUploadResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetUploadResponsePrivate(GetUploadResponse * const q);

    void parseGetUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUploadResponse)
    Q_DISABLE_COPY(GetUploadResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

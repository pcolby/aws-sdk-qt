// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADRESPONSE_P_H
#define QTAWS_CREATEUPLOADRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateUploadResponse;

class CreateUploadResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateUploadResponsePrivate(CreateUploadResponse * const q);

    void parseCreateUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUploadResponse)
    Q_DISABLE_COPY(CreateUploadResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

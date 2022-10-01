// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUPLOADRESPONSE_P_H
#define QTAWS_DELETEUPLOADRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteUploadResponse;

class DeleteUploadResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteUploadResponsePrivate(DeleteUploadResponse * const q);

    void parseDeleteUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUploadResponse)
    Q_DISABLE_COPY(DeleteUploadResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

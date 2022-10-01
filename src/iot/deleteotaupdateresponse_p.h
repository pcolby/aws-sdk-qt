// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOTAUPDATERESPONSE_P_H
#define QTAWS_DELETEOTAUPDATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteOTAUpdateResponse;

class DeleteOTAUpdateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteOTAUpdateResponsePrivate(DeleteOTAUpdateResponse * const q);

    void parseDeleteOTAUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOTAUpdateResponse)
    Q_DISABLE_COPY(DeleteOTAUpdateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

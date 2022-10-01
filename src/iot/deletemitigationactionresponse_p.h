// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMITIGATIONACTIONRESPONSE_P_H
#define QTAWS_DELETEMITIGATIONACTIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteMitigationActionResponse;

class DeleteMitigationActionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteMitigationActionResponsePrivate(DeleteMitigationActionResponse * const q);

    void parseDeleteMitigationActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMitigationActionResponse)
    Q_DISABLE_COPY(DeleteMitigationActionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMITIGATIONACTIONRESPONSE_P_H
#define QTAWS_CREATEMITIGATIONACTIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateMitigationActionResponse;

class CreateMitigationActionResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateMitigationActionResponsePrivate(CreateMitigationActionResponse * const q);

    void parseCreateMitigationActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMitigationActionResponse)
    Q_DISABLE_COPY(CreateMitigationActionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

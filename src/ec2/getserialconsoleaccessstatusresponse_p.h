// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERIALCONSOLEACCESSSTATUSRESPONSE_P_H
#define QTAWS_GETSERIALCONSOLEACCESSSTATUSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetSerialConsoleAccessStatusResponse;

class GetSerialConsoleAccessStatusResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetSerialConsoleAccessStatusResponsePrivate(GetSerialConsoleAccessStatusResponse * const q);

    void parseGetSerialConsoleAccessStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSerialConsoleAccessStatusResponse)
    Q_DISABLE_COPY(GetSerialConsoleAccessStatusResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESERIALCONSOLEACCESSRESPONSE_P_H
#define QTAWS_DISABLESERIALCONSOLEACCESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableSerialConsoleAccessResponse;

class DisableSerialConsoleAccessResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableSerialConsoleAccessResponsePrivate(DisableSerialConsoleAccessResponse * const q);

    void parseDisableSerialConsoleAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableSerialConsoleAccessResponse)
    Q_DISABLE_COPY(DisableSerialConsoleAccessResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

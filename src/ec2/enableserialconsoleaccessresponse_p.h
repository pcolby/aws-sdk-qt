// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESERIALCONSOLEACCESSRESPONSE_P_H
#define QTAWS_ENABLESERIALCONSOLEACCESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableSerialConsoleAccessResponse;

class EnableSerialConsoleAccessResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableSerialConsoleAccessResponsePrivate(EnableSerialConsoleAccessResponse * const q);

    void parseEnableSerialConsoleAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableSerialConsoleAccessResponse)
    Q_DISABLE_COPY(EnableSerialConsoleAccessResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

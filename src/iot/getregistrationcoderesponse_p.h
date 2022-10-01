// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRATIONCODERESPONSE_P_H
#define QTAWS_GETREGISTRATIONCODERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetRegistrationCodeResponse;

class GetRegistrationCodeResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetRegistrationCodeResponsePrivate(GetRegistrationCodeResponse * const q);

    void parseGetRegistrationCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegistrationCodeResponse)
    Q_DISABLE_COPY(GetRegistrationCodeResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

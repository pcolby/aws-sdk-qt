// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRATIONCODERESPONSE_P_H
#define QTAWS_DELETEREGISTRATIONCODERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteRegistrationCodeResponse;

class DeleteRegistrationCodeResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteRegistrationCodeResponsePrivate(DeleteRegistrationCodeResponse * const q);

    void parseDeleteRegistrationCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegistrationCodeResponse)
    Q_DISABLE_COPY(DeleteRegistrationCodeResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

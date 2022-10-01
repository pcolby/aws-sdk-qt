// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYRESPONSE_P_H
#define QTAWS_CREATEPOLICYRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreatePolicyResponse;

class CreatePolicyResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreatePolicyResponsePrivate(CreatePolicyResponse * const q);

    void parseCreatePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePolicyResponse)
    Q_DISABLE_COPY(CreatePolicyResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

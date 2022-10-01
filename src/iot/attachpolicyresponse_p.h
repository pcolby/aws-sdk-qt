// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYRESPONSE_P_H
#define QTAWS_ATTACHPOLICYRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AttachPolicyResponse;

class AttachPolicyResponsePrivate : public IoTResponsePrivate {

public:

    explicit AttachPolicyResponsePrivate(AttachPolicyResponse * const q);

    void parseAttachPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachPolicyResponse)
    Q_DISABLE_COPY(AttachPolicyResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPOLICYRESPONSE_P_H
#define QTAWS_DETACHPOLICYRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DetachPolicyResponse;

class DetachPolicyResponsePrivate : public IoTResponsePrivate {

public:

    explicit DetachPolicyResponsePrivate(DetachPolicyResponse * const q);

    void parseDetachPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachPolicyResponse)
    Q_DISABLE_COPY(DetachPolicyResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

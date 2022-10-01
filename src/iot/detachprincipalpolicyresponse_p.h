// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPRINCIPALPOLICYRESPONSE_P_H
#define QTAWS_DETACHPRINCIPALPOLICYRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DetachPrincipalPolicyResponse;

class DetachPrincipalPolicyResponsePrivate : public IoTResponsePrivate {

public:

    explicit DetachPrincipalPolicyResponsePrivate(DetachPrincipalPolicyResponse * const q);

    void parseDetachPrincipalPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachPrincipalPolicyResponse)
    Q_DISABLE_COPY(DetachPrincipalPolicyResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

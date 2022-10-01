// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORPOLICYRESPONSE_P_H
#define QTAWS_LISTTARGETSFORPOLICYRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListTargetsForPolicyResponse;

class ListTargetsForPolicyResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListTargetsForPolicyResponsePrivate(ListTargetsForPolicyResponse * const q);

    void parseListTargetsForPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetsForPolicyResponse)
    Q_DISABLE_COPY(ListTargetsForPolicyResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

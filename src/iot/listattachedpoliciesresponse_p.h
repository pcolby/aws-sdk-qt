// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDPOLICIESRESPONSE_P_H
#define QTAWS_LISTATTACHEDPOLICIESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListAttachedPoliciesResponse;

class ListAttachedPoliciesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListAttachedPoliciesResponsePrivate(ListAttachedPoliciesResponse * const q);

    void parseListAttachedPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttachedPoliciesResponse)
    Q_DISABLE_COPY(ListAttachedPoliciesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

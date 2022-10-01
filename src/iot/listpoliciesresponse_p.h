// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESRESPONSE_P_H
#define QTAWS_LISTPOLICIESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListPoliciesResponse;

class ListPoliciesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListPoliciesResponsePrivate(ListPoliciesResponse * const q);

    void parseListPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPoliciesResponse)
    Q_DISABLE_COPY(ListPoliciesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

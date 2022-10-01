// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALPOLICIESRESPONSE_P_H
#define QTAWS_LISTPRINCIPALPOLICIESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListPrincipalPoliciesResponse;

class ListPrincipalPoliciesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListPrincipalPoliciesResponsePrivate(ListPrincipalPoliciesResponse * const q);

    void parseListPrincipalPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPrincipalPoliciesResponse)
    Q_DISABLE_COPY(ListPrincipalPoliciesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

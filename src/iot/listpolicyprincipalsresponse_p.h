// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYPRINCIPALSRESPONSE_P_H
#define QTAWS_LISTPOLICYPRINCIPALSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListPolicyPrincipalsResponse;

class ListPolicyPrincipalsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListPolicyPrincipalsResponsePrivate(ListPolicyPrincipalsResponse * const q);

    void parseListPolicyPrincipalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPolicyPrincipalsResponse)
    Q_DISABLE_COPY(ListPolicyPrincipalsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

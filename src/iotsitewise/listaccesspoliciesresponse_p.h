// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOLICIESRESPONSE_P_H
#define QTAWS_LISTACCESSPOLICIESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAccessPoliciesResponse;

class ListAccessPoliciesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListAccessPoliciesResponsePrivate(ListAccessPoliciesResponse * const q);

    void parseListAccessPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessPoliciesResponse)
    Q_DISABLE_COPY(ListAccessPoliciesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

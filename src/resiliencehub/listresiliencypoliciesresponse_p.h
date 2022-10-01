// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESILIENCYPOLICIESRESPONSE_P_H
#define QTAWS_LISTRESILIENCYPOLICIESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListResiliencyPoliciesResponse;

class ListResiliencyPoliciesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListResiliencyPoliciesResponsePrivate(ListResiliencyPoliciesResponse * const q);

    void parseListResiliencyPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResiliencyPoliciesResponse)
    Q_DISABLE_COPY(ListResiliencyPoliciesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

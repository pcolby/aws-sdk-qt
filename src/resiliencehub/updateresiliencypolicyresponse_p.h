// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESILIENCYPOLICYRESPONSE_P_H
#define QTAWS_UPDATERESILIENCYPOLICYRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class UpdateResiliencyPolicyResponse;

class UpdateResiliencyPolicyResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit UpdateResiliencyPolicyResponsePrivate(UpdateResiliencyPolicyResponse * const q);

    void parseUpdateResiliencyPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResiliencyPolicyResponse)
    Q_DISABLE_COPY(UpdateResiliencyPolicyResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

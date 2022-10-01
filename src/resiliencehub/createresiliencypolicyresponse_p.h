// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESILIENCYPOLICYRESPONSE_P_H
#define QTAWS_CREATERESILIENCYPOLICYRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class CreateResiliencyPolicyResponse;

class CreateResiliencyPolicyResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit CreateResiliencyPolicyResponsePrivate(CreateResiliencyPolicyResponse * const q);

    void parseCreateResiliencyPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResiliencyPolicyResponse)
    Q_DISABLE_COPY(CreateResiliencyPolicyResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

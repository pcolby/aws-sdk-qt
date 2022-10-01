// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESILIENCYPOLICYRESPONSE_P_H
#define QTAWS_DELETERESILIENCYPOLICYRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteResiliencyPolicyResponse;

class DeleteResiliencyPolicyResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DeleteResiliencyPolicyResponsePrivate(DeleteResiliencyPolicyResponse * const q);

    void parseDeleteResiliencyPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResiliencyPolicyResponse)
    Q_DISABLE_COPY(DeleteResiliencyPolicyResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

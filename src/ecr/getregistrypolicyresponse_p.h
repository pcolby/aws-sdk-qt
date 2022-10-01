// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYPOLICYRESPONSE_P_H
#define QTAWS_GETREGISTRYPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class GetRegistryPolicyResponse;

class GetRegistryPolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit GetRegistryPolicyResponsePrivate(GetRegistryPolicyResponse * const q);

    void parseGetRegistryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegistryPolicyResponse)
    Q_DISABLE_COPY(GetRegistryPolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

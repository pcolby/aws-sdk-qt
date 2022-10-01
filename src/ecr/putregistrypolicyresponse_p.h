// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYPOLICYRESPONSE_P_H
#define QTAWS_PUTREGISTRYPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class PutRegistryPolicyResponse;

class PutRegistryPolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit PutRegistryPolicyResponsePrivate(PutRegistryPolicyResponse * const q);

    void parsePutRegistryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRegistryPolicyResponse)
    Q_DISABLE_COPY(PutRegistryPolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

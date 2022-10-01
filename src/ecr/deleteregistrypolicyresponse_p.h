// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYPOLICYRESPONSE_P_H
#define QTAWS_DELETEREGISTRYPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DeleteRegistryPolicyResponse;

class DeleteRegistryPolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit DeleteRegistryPolicyResponsePrivate(DeleteRegistryPolicyResponse * const q);

    void parseDeleteRegistryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegistryPolicyResponse)
    Q_DISABLE_COPY(DeleteRegistryPolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETREPOSITORYPOLICYRESPONSE_P_H
#define QTAWS_SETREPOSITORYPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class SetRepositoryPolicyResponse;

class SetRepositoryPolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit SetRepositoryPolicyResponsePrivate(SetRepositoryPolicyResponse * const q);

    void parseSetRepositoryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetRepositoryPolicyResponse)
    Q_DISABLE_COPY(SetRepositoryPolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

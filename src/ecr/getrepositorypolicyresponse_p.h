// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPOLICYRESPONSE_P_H
#define QTAWS_GETREPOSITORYPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class GetRepositoryPolicyResponse;

class GetRepositoryPolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit GetRepositoryPolicyResponsePrivate(GetRepositoryPolicyResponse * const q);

    void parseGetRepositoryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryPolicyResponse)
    Q_DISABLE_COPY(GetRepositoryPolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

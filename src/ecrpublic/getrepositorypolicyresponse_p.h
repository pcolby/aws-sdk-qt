// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPOLICYRESPONSE_P_H
#define QTAWS_GETREPOSITORYPOLICYRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class GetRepositoryPolicyResponse;

class GetRepositoryPolicyResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit GetRepositoryPolicyResponsePrivate(GetRepositoryPolicyResponse * const q);

    void parseGetRepositoryPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryPolicyResponse)
    Q_DISABLE_COPY(GetRepositoryPolicyResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

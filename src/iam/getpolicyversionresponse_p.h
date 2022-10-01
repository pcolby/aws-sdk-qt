// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYVERSIONRESPONSE_P_H
#define QTAWS_GETPOLICYVERSIONRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetPolicyVersionResponse;

class GetPolicyVersionResponsePrivate : public IamResponsePrivate {

public:

    explicit GetPolicyVersionResponsePrivate(GetPolicyVersionResponse * const q);

    void parseGetPolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPolicyVersionResponse)
    Q_DISABLE_COPY(GetPolicyVersionResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

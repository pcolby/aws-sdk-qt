// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSUMEROLEPOLICYRESPONSE_P_H
#define QTAWS_UPDATEASSUMEROLEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateAssumeRolePolicyResponse;

class UpdateAssumeRolePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateAssumeRolePolicyResponsePrivate(UpdateAssumeRolePolicyResponse * const q);

    void parseUpdateAssumeRolePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssumeRolePolicyResponse)
    Q_DISABLE_COPY(UpdateAssumeRolePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

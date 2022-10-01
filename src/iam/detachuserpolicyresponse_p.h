// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHUSERPOLICYRESPONSE_P_H
#define QTAWS_DETACHUSERPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DetachUserPolicyResponse;

class DetachUserPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DetachUserPolicyResponsePrivate(DetachUserPolicyResponse * const q);

    void parseDetachUserPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachUserPolicyResponse)
    Q_DISABLE_COPY(DetachUserPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

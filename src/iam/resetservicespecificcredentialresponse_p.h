// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESPECIFICCREDENTIALRESPONSE_P_H
#define QTAWS_RESETSERVICESPECIFICCREDENTIALRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ResetServiceSpecificCredentialResponse;

class ResetServiceSpecificCredentialResponsePrivate : public IamResponsePrivate {

public:

    explicit ResetServiceSpecificCredentialResponsePrivate(ResetServiceSpecificCredentialResponse * const q);

    void parseResetServiceSpecificCredentialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(ResetServiceSpecificCredentialResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

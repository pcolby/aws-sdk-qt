// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPOLICYRESPONSE_P_H
#define QTAWS_GETKEYPOLICYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GetKeyPolicyResponse;

class GetKeyPolicyResponsePrivate : public KmsResponsePrivate {

public:

    explicit GetKeyPolicyResponsePrivate(GetKeyPolicyResponse * const q);

    void parseGetKeyPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyPolicyResponse)
    Q_DISABLE_COPY(GetKeyPolicyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

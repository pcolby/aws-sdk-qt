// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_VALIDATERESOURCEPOLICYRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class ValidateResourcePolicyResponse;

class ValidateResourcePolicyResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit ValidateResourcePolicyResponsePrivate(ValidateResourcePolicyResponse * const q);

    void parseValidateResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateResourcePolicyResponse)
    Q_DISABLE_COPY(ValidateResourcePolicyResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

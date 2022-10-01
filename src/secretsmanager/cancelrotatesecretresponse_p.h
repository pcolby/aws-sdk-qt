// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELROTATESECRETRESPONSE_P_H
#define QTAWS_CANCELROTATESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class CancelRotateSecretResponse;

class CancelRotateSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit CancelRotateSecretResponsePrivate(CancelRotateSecretResponse * const q);

    void parseCancelRotateSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelRotateSecretResponse)
    Q_DISABLE_COPY(CancelRotateSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

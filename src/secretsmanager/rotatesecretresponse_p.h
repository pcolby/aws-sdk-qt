// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATESECRETRESPONSE_P_H
#define QTAWS_ROTATESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class RotateSecretResponse;

class RotateSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit RotateSecretResponsePrivate(RotateSecretResponse * const q);

    void parseRotateSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RotateSecretResponse)
    Q_DISABLE_COPY(RotateSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

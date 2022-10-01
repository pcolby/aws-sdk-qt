// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESECRETRESPONSE_P_H
#define QTAWS_RESTORESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class RestoreSecretResponse;

class RestoreSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit RestoreSecretResponsePrivate(RestoreSecretResponse * const q);

    void parseRestoreSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreSecretResponse)
    Q_DISABLE_COPY(RestoreSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

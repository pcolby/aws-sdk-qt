// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETVERSIONSTAGERESPONSE_P_H
#define QTAWS_UPDATESECRETVERSIONSTAGERESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretVersionStageResponse;

class UpdateSecretVersionStageResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit UpdateSecretVersionStageResponsePrivate(UpdateSecretVersionStageResponse * const q);

    void parseUpdateSecretVersionStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecretVersionStageResponse)
    Q_DISABLE_COPY(UpdateSecretVersionStageResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

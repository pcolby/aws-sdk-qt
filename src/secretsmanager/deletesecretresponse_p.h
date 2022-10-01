// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECRETRESPONSE_P_H
#define QTAWS_DELETESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class DeleteSecretResponse;

class DeleteSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit DeleteSecretResponsePrivate(DeleteSecretResponse * const q);

    void parseDeleteSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSecretResponse)
    Q_DISABLE_COPY(DeleteSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATESECRETRESPONSE_H
#define QTAWS_ROTATESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "rotatesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class RotateSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT RotateSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    RotateSecretResponse(const RotateSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RotateSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateSecretResponse)
    Q_DISABLE_COPY(RotateSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

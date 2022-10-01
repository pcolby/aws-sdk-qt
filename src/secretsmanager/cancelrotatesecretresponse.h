// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELROTATESECRETRESPONSE_H
#define QTAWS_CANCELROTATESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "cancelrotatesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class CancelRotateSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT CancelRotateSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    CancelRotateSecretResponse(const CancelRotateSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelRotateSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelRotateSecretResponse)
    Q_DISABLE_COPY(CancelRotateSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

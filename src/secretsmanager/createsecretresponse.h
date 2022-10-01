// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECRETRESPONSE_H
#define QTAWS_CREATESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "createsecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class CreateSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT CreateSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    CreateSecretResponse(const CreateSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecretResponse)
    Q_DISABLE_COPY(CreateSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

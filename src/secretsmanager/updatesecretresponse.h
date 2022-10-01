// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETRESPONSE_H
#define QTAWS_UPDATESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "updatesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT UpdateSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    UpdateSecretResponse(const UpdateSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecretResponse)
    Q_DISABLE_COPY(UpdateSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

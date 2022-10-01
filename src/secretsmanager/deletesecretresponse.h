// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECRETRESPONSE_H
#define QTAWS_DELETESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "deletesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class DeleteSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT DeleteSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    DeleteSecretResponse(const DeleteSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecretResponse)
    Q_DISABLE_COPY(DeleteSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

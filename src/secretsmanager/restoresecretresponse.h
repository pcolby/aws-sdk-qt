// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESECRETRESPONSE_H
#define QTAWS_RESTORESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "restoresecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class RestoreSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT RestoreSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    RestoreSecretResponse(const RestoreSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreSecretResponse)
    Q_DISABLE_COPY(RestoreSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

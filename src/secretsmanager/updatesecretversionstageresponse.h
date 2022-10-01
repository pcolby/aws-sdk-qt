// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETVERSIONSTAGERESPONSE_H
#define QTAWS_UPDATESECRETVERSIONSTAGERESPONSE_H

#include "secretsmanagerresponse.h"
#include "updatesecretversionstagerequest.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretVersionStageResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT UpdateSecretVersionStageResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    UpdateSecretVersionStageResponse(const UpdateSecretVersionStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecretVersionStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecretVersionStageResponse)
    Q_DISABLE_COPY(UpdateSecretVersionStageResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

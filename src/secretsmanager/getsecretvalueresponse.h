// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECRETVALUERESPONSE_H
#define QTAWS_GETSECRETVALUERESPONSE_H

#include "secretsmanagerresponse.h"
#include "getsecretvaluerequest.h"

namespace QtAws {
namespace SecretsManager {

class GetSecretValueResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT GetSecretValueResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    GetSecretValueResponse(const GetSecretValueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSecretValueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSecretValueResponse)
    Q_DISABLE_COPY(GetSecretValueResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRANDOMPASSWORDRESPONSE_H
#define QTAWS_GETRANDOMPASSWORDRESPONSE_H

#include "secretsmanagerresponse.h"
#include "getrandompasswordrequest.h"

namespace QtAws {
namespace SecretsManager {

class GetRandomPasswordResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT GetRandomPasswordResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    GetRandomPasswordResponse(const GetRandomPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRandomPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRandomPasswordResponse)
    Q_DISABLE_COPY(GetRandomPasswordResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATERESOURCEPOLICYRESPONSE_H
#define QTAWS_VALIDATERESOURCEPOLICYRESPONSE_H

#include "secretsmanagerresponse.h"
#include "validateresourcepolicyrequest.h"

namespace QtAws {
namespace SecretsManager {

class ValidateResourcePolicyResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT ValidateResourcePolicyResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    ValidateResourcePolicyResponse(const ValidateResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateResourcePolicyResponse)
    Q_DISABLE_COPY(ValidateResourcePolicyResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

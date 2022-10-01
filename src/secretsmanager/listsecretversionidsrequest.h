// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETVERSIONIDSREQUEST_H
#define QTAWS_LISTSECRETVERSIONIDSREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretVersionIdsRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT ListSecretVersionIdsRequest : public SecretsManagerRequest {

public:
    ListSecretVersionIdsRequest(const ListSecretVersionIdsRequest &other);
    ListSecretVersionIdsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecretVersionIdsRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

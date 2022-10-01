// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETVERSIONIDSRESPONSE_H
#define QTAWS_LISTSECRETVERSIONIDSRESPONSE_H

#include "secretsmanagerresponse.h"
#include "listsecretversionidsrequest.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretVersionIdsResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT ListSecretVersionIdsResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    ListSecretVersionIdsResponse(const ListSecretVersionIdsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecretVersionIdsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecretVersionIdsResponse)
    Q_DISABLE_COPY(ListSecretVersionIdsResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

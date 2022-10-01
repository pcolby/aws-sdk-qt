// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECRETRESPONSE_H
#define QTAWS_DESCRIBESECRETRESPONSE_H

#include "secretsmanagerresponse.h"
#include "describesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class DescribeSecretResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT DescribeSecretResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    DescribeSecretResponse(const DescribeSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecretResponse)
    Q_DISABLE_COPY(DescribeSecretResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

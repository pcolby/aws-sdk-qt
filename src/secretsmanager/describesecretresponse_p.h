// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECRETRESPONSE_P_H
#define QTAWS_DESCRIBESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class DescribeSecretResponse;

class DescribeSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit DescribeSecretResponsePrivate(DescribeSecretResponse * const q);

    void parseDescribeSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecretResponse)
    Q_DISABLE_COPY(DescribeSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

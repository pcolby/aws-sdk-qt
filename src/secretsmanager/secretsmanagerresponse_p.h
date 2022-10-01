// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECRETSMANAGERRESPONSE_P_H
#define QTAWS_SECRETSMANAGERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class SecretsManagerResponse;

class SecretsManagerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SecretsManagerResponsePrivate(SecretsManagerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SecretsManagerResponse)
    Q_DISABLE_COPY(SecretsManagerResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

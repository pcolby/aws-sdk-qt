// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRANDOMPASSWORDRESPONSE_P_H
#define QTAWS_GETRANDOMPASSWORDRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class GetRandomPasswordResponse;

class GetRandomPasswordResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit GetRandomPasswordResponsePrivate(GetRandomPasswordResponse * const q);

    void parseGetRandomPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRandomPasswordResponse)
    Q_DISABLE_COPY(GetRandomPasswordResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

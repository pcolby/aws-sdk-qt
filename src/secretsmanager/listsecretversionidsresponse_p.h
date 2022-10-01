// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETVERSIONIDSRESPONSE_P_H
#define QTAWS_LISTSECRETVERSIONIDSRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretVersionIdsResponse;

class ListSecretVersionIdsResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit ListSecretVersionIdsResponsePrivate(ListSecretVersionIdsResponse * const q);

    void parseListSecretVersionIdsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecretVersionIdsResponse)
    Q_DISABLE_COPY(ListSecretVersionIdsResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

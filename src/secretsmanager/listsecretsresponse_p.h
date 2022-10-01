// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETSRESPONSE_P_H
#define QTAWS_LISTSECRETSRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretsResponse;

class ListSecretsResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit ListSecretsResponsePrivate(ListSecretsResponse * const q);

    void parseListSecretsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecretsResponse)
    Q_DISABLE_COPY(ListSecretsResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif

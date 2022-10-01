// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCUSTOMKEYSTORERESPONSE_P_H
#define QTAWS_CONNECTCUSTOMKEYSTORERESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ConnectCustomKeyStoreResponse;

class ConnectCustomKeyStoreResponsePrivate : public KmsResponsePrivate {

public:

    explicit ConnectCustomKeyStoreResponsePrivate(ConnectCustomKeyStoreResponse * const q);

    void parseConnectCustomKeyStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConnectCustomKeyStoreResponse)
    Q_DISABLE_COPY(ConnectCustomKeyStoreResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

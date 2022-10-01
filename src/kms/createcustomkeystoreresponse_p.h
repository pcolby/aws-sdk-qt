// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMKEYSTORERESPONSE_P_H
#define QTAWS_CREATECUSTOMKEYSTORERESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class CreateCustomKeyStoreResponse;

class CreateCustomKeyStoreResponsePrivate : public KmsResponsePrivate {

public:

    explicit CreateCustomKeyStoreResponsePrivate(CreateCustomKeyStoreResponse * const q);

    void parseCreateCustomKeyStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomKeyStoreResponse)
    Q_DISABLE_COPY(CreateCustomKeyStoreResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

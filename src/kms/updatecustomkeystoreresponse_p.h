// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMKEYSTORERESPONSE_P_H
#define QTAWS_UPDATECUSTOMKEYSTORERESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class UpdateCustomKeyStoreResponse;

class UpdateCustomKeyStoreResponsePrivate : public KmsResponsePrivate {

public:

    explicit UpdateCustomKeyStoreResponsePrivate(UpdateCustomKeyStoreResponse * const q);

    void parseUpdateCustomKeyStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomKeyStoreResponse)
    Q_DISABLE_COPY(UpdateCustomKeyStoreResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

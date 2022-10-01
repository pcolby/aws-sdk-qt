// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMKEYSTORERESPONSE_P_H
#define QTAWS_DELETECUSTOMKEYSTORERESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DeleteCustomKeyStoreResponse;

class DeleteCustomKeyStoreResponsePrivate : public KmsResponsePrivate {

public:

    explicit DeleteCustomKeyStoreResponsePrivate(DeleteCustomKeyStoreResponse * const q);

    void parseDeleteCustomKeyStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomKeyStoreResponse)
    Q_DISABLE_COPY(DeleteCustomKeyStoreResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

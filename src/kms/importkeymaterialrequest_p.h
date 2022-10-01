// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYMATERIALREQUEST_P_H
#define QTAWS_IMPORTKEYMATERIALREQUEST_P_H

#include "kmsrequest_p.h"
#include "importkeymaterialrequest.h"

namespace QtAws {
namespace Kms {

class ImportKeyMaterialRequest;

class ImportKeyMaterialRequestPrivate : public KmsRequestPrivate {

public:
    ImportKeyMaterialRequestPrivate(const KmsRequest::Action action,
                                   ImportKeyMaterialRequest * const q);
    ImportKeyMaterialRequestPrivate(const ImportKeyMaterialRequestPrivate &other,
                                   ImportKeyMaterialRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportKeyMaterialRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

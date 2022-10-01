// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYREQUEST_P_H
#define QTAWS_GENERATEDATAKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "generatedatakeyrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyRequest;

class GenerateDataKeyRequestPrivate : public KmsRequestPrivate {

public:
    GenerateDataKeyRequestPrivate(const KmsRequest::Action action,
                                   GenerateDataKeyRequest * const q);
    GenerateDataKeyRequestPrivate(const GenerateDataKeyRequestPrivate &other,
                                   GenerateDataKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

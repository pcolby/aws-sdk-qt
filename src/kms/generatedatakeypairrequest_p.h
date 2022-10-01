// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRREQUEST_P_H
#define QTAWS_GENERATEDATAKEYPAIRREQUEST_P_H

#include "kmsrequest_p.h"
#include "generatedatakeypairrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairRequest;

class GenerateDataKeyPairRequestPrivate : public KmsRequestPrivate {

public:
    GenerateDataKeyPairRequestPrivate(const KmsRequest::Action action,
                                   GenerateDataKeyPairRequest * const q);
    GenerateDataKeyPairRequestPrivate(const GenerateDataKeyPairRequestPrivate &other,
                                   GenerateDataKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyPairRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

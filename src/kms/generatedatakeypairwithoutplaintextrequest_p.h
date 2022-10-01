// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTREQUEST_P_H
#define QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTREQUEST_P_H

#include "kmsrequest_p.h"
#include "generatedatakeypairwithoutplaintextrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairWithoutPlaintextRequest;

class GenerateDataKeyPairWithoutPlaintextRequestPrivate : public KmsRequestPrivate {

public:
    GenerateDataKeyPairWithoutPlaintextRequestPrivate(const KmsRequest::Action action,
                                   GenerateDataKeyPairWithoutPlaintextRequest * const q);
    GenerateDataKeyPairWithoutPlaintextRequestPrivate(const GenerateDataKeyPairWithoutPlaintextRequestPrivate &other,
                                   GenerateDataKeyPairWithoutPlaintextRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyPairWithoutPlaintextRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

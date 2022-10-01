// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_P_H
#define QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_P_H

#include "kmsrequest_p.h"
#include "generatedatakeywithoutplaintextrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyWithoutPlaintextRequest;

class GenerateDataKeyWithoutPlaintextRequestPrivate : public KmsRequestPrivate {

public:
    GenerateDataKeyWithoutPlaintextRequestPrivate(const KmsRequest::Action action,
                                   GenerateDataKeyWithoutPlaintextRequest * const q);
    GenerateDataKeyWithoutPlaintextRequestPrivate(const GenerateDataKeyWithoutPlaintextRequestPrivate &other,
                                   GenerateDataKeyWithoutPlaintextRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyWithoutPlaintextRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

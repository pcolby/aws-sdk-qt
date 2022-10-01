// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATERANDOMREQUEST_P_H
#define QTAWS_GENERATERANDOMREQUEST_P_H

#include "kmsrequest_p.h"
#include "generaterandomrequest.h"

namespace QtAws {
namespace Kms {

class GenerateRandomRequest;

class GenerateRandomRequestPrivate : public KmsRequestPrivate {

public:
    GenerateRandomRequestPrivate(const KmsRequest::Action action,
                                   GenerateRandomRequest * const q);
    GenerateRandomRequestPrivate(const GenerateRandomRequestPrivate &other,
                                   GenerateRandomRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateRandomRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

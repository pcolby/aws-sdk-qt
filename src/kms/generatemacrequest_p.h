// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMACREQUEST_P_H
#define QTAWS_GENERATEMACREQUEST_P_H

#include "kmsrequest_p.h"
#include "generatemacrequest.h"

namespace QtAws {
namespace Kms {

class GenerateMacRequest;

class GenerateMacRequestPrivate : public KmsRequestPrivate {

public:
    GenerateMacRequestPrivate(const KmsRequest::Action action,
                                   GenerateMacRequest * const q);
    GenerateMacRequestPrivate(const GenerateMacRequestPrivate &other,
                                   GenerateMacRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateMacRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

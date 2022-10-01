// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARAMETERREQUEST_P_H
#define QTAWS_PUTPARAMETERREQUEST_P_H

#include "ssmrequest_p.h"
#include "putparameterrequest.h"

namespace QtAws {
namespace Ssm {

class PutParameterRequest;

class PutParameterRequestPrivate : public SsmRequestPrivate {

public:
    PutParameterRequestPrivate(const SsmRequest::Action action,
                                   PutParameterRequest * const q);
    PutParameterRequestPrivate(const PutParameterRequestPrivate &other,
                                   PutParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutParameterRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

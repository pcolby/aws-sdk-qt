// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLABELPARAMETERVERSIONREQUEST_P_H
#define QTAWS_UNLABELPARAMETERVERSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "unlabelparameterversionrequest.h"

namespace QtAws {
namespace Ssm {

class UnlabelParameterVersionRequest;

class UnlabelParameterVersionRequestPrivate : public SsmRequestPrivate {

public:
    UnlabelParameterVersionRequestPrivate(const SsmRequest::Action action,
                                   UnlabelParameterVersionRequest * const q);
    UnlabelParameterVersionRequestPrivate(const UnlabelParameterVersionRequestPrivate &other,
                                   UnlabelParameterVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnlabelParameterVersionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

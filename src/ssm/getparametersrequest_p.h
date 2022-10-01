// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSREQUEST_P_H
#define QTAWS_GETPARAMETERSREQUEST_P_H

#include "ssmrequest_p.h"
#include "getparametersrequest.h"

namespace QtAws {
namespace Ssm {

class GetParametersRequest;

class GetParametersRequestPrivate : public SsmRequestPrivate {

public:
    GetParametersRequestPrivate(const SsmRequest::Action action,
                                   GetParametersRequest * const q);
    GetParametersRequestPrivate(const GetParametersRequestPrivate &other,
                                   GetParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParametersRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

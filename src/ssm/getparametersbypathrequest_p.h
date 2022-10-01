// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSBYPATHREQUEST_P_H
#define QTAWS_GETPARAMETERSBYPATHREQUEST_P_H

#include "ssmrequest_p.h"
#include "getparametersbypathrequest.h"

namespace QtAws {
namespace Ssm {

class GetParametersByPathRequest;

class GetParametersByPathRequestPrivate : public SsmRequestPrivate {

public:
    GetParametersByPathRequestPrivate(const SsmRequest::Action action,
                                   GetParametersByPathRequest * const q);
    GetParametersByPathRequestPrivate(const GetParametersByPathRequestPrivate &other,
                                   GetParametersByPathRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParametersByPathRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

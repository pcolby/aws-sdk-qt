// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERREQUEST_P_H
#define QTAWS_GETPARAMETERREQUEST_P_H

#include "ssmrequest_p.h"
#include "getparameterrequest.h"

namespace QtAws {
namespace Ssm {

class GetParameterRequest;

class GetParameterRequestPrivate : public SsmRequestPrivate {

public:
    GetParameterRequestPrivate(const SsmRequest::Action action,
                                   GetParameterRequest * const q);
    GetParameterRequestPrivate(const GetParameterRequestPrivate &other,
                                   GetParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParameterRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

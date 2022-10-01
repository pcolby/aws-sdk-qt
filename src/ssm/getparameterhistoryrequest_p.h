// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERHISTORYREQUEST_P_H
#define QTAWS_GETPARAMETERHISTORYREQUEST_P_H

#include "ssmrequest_p.h"
#include "getparameterhistoryrequest.h"

namespace QtAws {
namespace Ssm {

class GetParameterHistoryRequest;

class GetParameterHistoryRequestPrivate : public SsmRequestPrivate {

public:
    GetParameterHistoryRequestPrivate(const SsmRequest::Action action,
                                   GetParameterHistoryRequest * const q);
    GetParameterHistoryRequestPrivate(const GetParameterHistoryRequestPrivate &other,
                                   GetParameterHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParameterHistoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXECUTIONHISTORYREQUEST_P_H
#define QTAWS_GETEXECUTIONHISTORYREQUEST_P_H

#include "sfnrequest_p.h"
#include "getexecutionhistoryrequest.h"

namespace QtAws {
namespace Sfn {

class GetExecutionHistoryRequest;

class GetExecutionHistoryRequestPrivate : public SfnRequestPrivate {

public:
    GetExecutionHistoryRequestPrivate(const SfnRequest::Action action,
                                   GetExecutionHistoryRequest * const q);
    GetExecutionHistoryRequestPrivate(const GetExecutionHistoryRequestPrivate &other,
                                   GetExecutionHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExecutionHistoryRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif

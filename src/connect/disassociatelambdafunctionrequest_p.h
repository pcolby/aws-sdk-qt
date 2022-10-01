// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELAMBDAFUNCTIONREQUEST_P_H
#define QTAWS_DISASSOCIATELAMBDAFUNCTIONREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatelambdafunctionrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateLambdaFunctionRequest;

class DisassociateLambdaFunctionRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateLambdaFunctionRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateLambdaFunctionRequest * const q);
    DisassociateLambdaFunctionRequestPrivate(const DisassociateLambdaFunctionRequestPrivate &other,
                                   DisassociateLambdaFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateLambdaFunctionRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

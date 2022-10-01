// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMMANDREQUEST_P_H
#define QTAWS_CANCELCOMMANDREQUEST_P_H

#include "ssmrequest_p.h"
#include "cancelcommandrequest.h"

namespace QtAws {
namespace Ssm {

class CancelCommandRequest;

class CancelCommandRequestPrivate : public SsmRequestPrivate {

public:
    CancelCommandRequestPrivate(const SsmRequest::Action action,
                                   CancelCommandRequest * const q);
    CancelCommandRequestPrivate(const CancelCommandRequestPrivate &other,
                                   CancelCommandRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelCommandRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVERREQUEST_P_H
#define QTAWS_CREATESERVERREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "createserverrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class CreateServerRequest;

class CreateServerRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    CreateServerRequestPrivate(const OpsWorksCmRequest::Action action,
                                   CreateServerRequest * const q);
    CreateServerRequestPrivate(const CreateServerRequestPrivate &other,
                                   CreateServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPIREQUEST_P_H
#define QTAWS_DISASSOCIATEAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "disassociateapirequest.h"

namespace QtAws {
namespace AppSync {

class DisassociateApiRequest;

class DisassociateApiRequestPrivate : public AppSyncRequestPrivate {

public:
    DisassociateApiRequestPrivate(const AppSyncRequest::Action action,
                                   DisassociateApiRequest * const q);
    DisassociateApiRequestPrivate(const DisassociateApiRequestPrivate &other,
                                   DisassociateApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

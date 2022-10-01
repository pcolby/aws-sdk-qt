// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVEDORIGINREQUEST_P_H
#define QTAWS_DISASSOCIATEAPPROVEDORIGINREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociateapprovedoriginrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateApprovedOriginRequest;

class DisassociateApprovedOriginRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateApprovedOriginRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateApprovedOriginRequest * const q);
    DisassociateApprovedOriginRequestPrivate(const DisassociateApprovedOriginRequestPrivate &other,
                                   DisassociateApprovedOriginRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateApprovedOriginRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

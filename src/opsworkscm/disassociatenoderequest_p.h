// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENODEREQUEST_P_H
#define QTAWS_DISASSOCIATENODEREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "disassociatenoderequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DisassociateNodeRequest;

class DisassociateNodeRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DisassociateNodeRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DisassociateNodeRequest * const q);
    DisassociateNodeRequestPrivate(const DisassociateNodeRequestPrivate &other,
                                   DisassociateNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateNodeRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif

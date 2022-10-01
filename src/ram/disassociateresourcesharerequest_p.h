// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHAREREQUEST_P_H
#define QTAWS_DISASSOCIATERESOURCESHAREREQUEST_P_H

#include "ramrequest_p.h"
#include "disassociateresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceShareRequest;

class DisassociateResourceShareRequestPrivate : public RamRequestPrivate {

public:
    DisassociateResourceShareRequestPrivate(const RamRequest::Action action,
                                   DisassociateResourceShareRequest * const q);
    DisassociateResourceShareRequestPrivate(const DisassociateResourceShareRequestPrivate &other,
                                   DisassociateResourceShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFLEETREQUEST_P_H
#define QTAWS_DISASSOCIATEAPPLICATIONFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "disassociateapplicationfleetrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFleetRequest;

class DisassociateApplicationFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    DisassociateApplicationFleetRequestPrivate(const AppStreamRequest::Action action,
                                   DisassociateApplicationFleetRequest * const q);
    DisassociateApplicationFleetRequestPrivate(const DisassociateApplicationFleetRequestPrivate &other,
                                   DisassociateApplicationFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateApplicationFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

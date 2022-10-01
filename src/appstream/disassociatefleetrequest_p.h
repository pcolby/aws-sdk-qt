// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFLEETREQUEST_P_H
#define QTAWS_DISASSOCIATEFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "disassociatefleetrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateFleetRequest;

class DisassociateFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    DisassociateFleetRequestPrivate(const AppStreamRequest::Action action,
                                   DisassociateFleetRequest * const q);
    DisassociateFleetRequestPrivate(const DisassociateFleetRequestPrivate &other,
                                   DisassociateFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

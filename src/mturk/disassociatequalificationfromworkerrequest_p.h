// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERREQUEST_P_H
#define QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERREQUEST_P_H

#include "mturkrequest_p.h"
#include "disassociatequalificationfromworkerrequest.h"

namespace QtAws {
namespace MTurk {

class DisassociateQualificationFromWorkerRequest;

class DisassociateQualificationFromWorkerRequestPrivate : public MTurkRequestPrivate {

public:
    DisassociateQualificationFromWorkerRequestPrivate(const MTurkRequest::Action action,
                                   DisassociateQualificationFromWorkerRequest * const q);
    DisassociateQualificationFromWorkerRequestPrivate(const DisassociateQualificationFromWorkerRequestPrivate &other,
                                   DisassociateQualificationFromWorkerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateQualificationFromWorkerRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

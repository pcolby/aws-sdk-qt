// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEQUALIFICATIONWITHWORKERREQUEST_P_H
#define QTAWS_ASSOCIATEQUALIFICATIONWITHWORKERREQUEST_P_H

#include "mturkrequest_p.h"
#include "associatequalificationwithworkerrequest.h"

namespace QtAws {
namespace MTurk {

class AssociateQualificationWithWorkerRequest;

class AssociateQualificationWithWorkerRequestPrivate : public MTurkRequestPrivate {

public:
    AssociateQualificationWithWorkerRequestPrivate(const MTurkRequest::Action action,
                                   AssociateQualificationWithWorkerRequest * const q);
    AssociateQualificationWithWorkerRequestPrivate(const AssociateQualificationWithWorkerRequestPrivate &other,
                                   AssociateQualificationWithWorkerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateQualificationWithWorkerRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

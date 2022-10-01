// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTQUALIFICATIONREQUESTREQUEST_P_H
#define QTAWS_REJECTQUALIFICATIONREQUESTREQUEST_P_H

#include "mturkrequest_p.h"
#include "rejectqualificationrequestrequest.h"

namespace QtAws {
namespace MTurk {

class RejectQualificationRequestRequest;

class RejectQualificationRequestRequestPrivate : public MTurkRequestPrivate {

public:
    RejectQualificationRequestRequestPrivate(const MTurkRequest::Action action,
                                   RejectQualificationRequestRequest * const q);
    RejectQualificationRequestRequestPrivate(const RejectQualificationRequestRequestPrivate &other,
                                   RejectQualificationRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectQualificationRequestRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

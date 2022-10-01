// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTQUALIFICATIONREQUESTREQUEST_P_H
#define QTAWS_ACCEPTQUALIFICATIONREQUESTREQUEST_P_H

#include "mturkrequest_p.h"
#include "acceptqualificationrequestrequest.h"

namespace QtAws {
namespace MTurk {

class AcceptQualificationRequestRequest;

class AcceptQualificationRequestRequestPrivate : public MTurkRequestPrivate {

public:
    AcceptQualificationRequestRequestPrivate(const MTurkRequest::Action action,
                                   AcceptQualificationRequestRequest * const q);
    AcceptQualificationRequestRequestPrivate(const AcceptQualificationRequestRequestPrivate &other,
                                   AcceptQualificationRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptQualificationRequestRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

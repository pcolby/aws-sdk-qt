// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPIRATIONFORHITREQUEST_P_H
#define QTAWS_UPDATEEXPIRATIONFORHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "updateexpirationforhitrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateExpirationForHITRequest;

class UpdateExpirationForHITRequestPrivate : public MTurkRequestPrivate {

public:
    UpdateExpirationForHITRequestPrivate(const MTurkRequest::Action action,
                                   UpdateExpirationForHITRequest * const q);
    UpdateExpirationForHITRequestPrivate(const UpdateExpirationForHITRequestPrivate &other,
                                   UpdateExpirationForHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateExpirationForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUALIFICATIONTYPEREQUEST_P_H
#define QTAWS_UPDATEQUALIFICATIONTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "updatequalificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class UpdateQualificationTypeRequest;

class UpdateQualificationTypeRequestPrivate : public MTurkRequestPrivate {

public:
    UpdateQualificationTypeRequestPrivate(const MTurkRequest::Action action,
                                   UpdateQualificationTypeRequest * const q);
    UpdateQualificationTypeRequestPrivate(const UpdateQualificationTypeRequestPrivate &other,
                                   UpdateQualificationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

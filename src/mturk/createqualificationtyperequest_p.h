// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUALIFICATIONTYPEREQUEST_P_H
#define QTAWS_CREATEQUALIFICATIONTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "createqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateQualificationTypeRequest;

class CreateQualificationTypeRequestPrivate : public MTurkRequestPrivate {

public:
    CreateQualificationTypeRequestPrivate(const MTurkRequest::Action action,
                                   CreateQualificationTypeRequest * const q);
    CreateQualificationTypeRequestPrivate(const CreateQualificationTypeRequestPrivate &other,
                                   CreateQualificationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

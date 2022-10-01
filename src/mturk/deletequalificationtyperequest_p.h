// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUALIFICATIONTYPEREQUEST_P_H
#define QTAWS_DELETEQUALIFICATIONTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "deletequalificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class DeleteQualificationTypeRequest;

class DeleteQualificationTypeRequestPrivate : public MTurkRequestPrivate {

public:
    DeleteQualificationTypeRequestPrivate(const MTurkRequest::Action action,
                                   DeleteQualificationTypeRequest * const q);
    DeleteQualificationTypeRequestPrivate(const DeleteQualificationTypeRequestPrivate &other,
                                   DeleteQualificationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERREQUEST_P_H
#define QTAWS_DELETEFILTERREQUEST_P_H

#include "personalizerequest_p.h"
#include "deletefilterrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteFilterRequest;

class DeleteFilterRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteFilterRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteFilterRequest * const q);
    DeleteFilterRequestPrivate(const DeleteFilterRequestPrivate &other,
                                   DeleteFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFilterRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

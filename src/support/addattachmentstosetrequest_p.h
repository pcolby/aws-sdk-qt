// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTACHMENTSTOSETREQUEST_P_H
#define QTAWS_ADDATTACHMENTSTOSETREQUEST_P_H

#include "supportrequest_p.h"
#include "addattachmentstosetrequest.h"

namespace QtAws {
namespace Support {

class AddAttachmentsToSetRequest;

class AddAttachmentsToSetRequestPrivate : public SupportRequestPrivate {

public:
    AddAttachmentsToSetRequestPrivate(const SupportRequest::Action action,
                                   AddAttachmentsToSetRequest * const q);
    AddAttachmentsToSetRequestPrivate(const AddAttachmentsToSetRequestPrivate &other,
                                   AddAttachmentsToSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddAttachmentsToSetRequest)

};

} // namespace Support
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYATTACHMENTSREQUEST_P_H
#define QTAWS_LISTPOLICYATTACHMENTSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listpolicyattachmentsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListPolicyAttachmentsRequest;

class ListPolicyAttachmentsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListPolicyAttachmentsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListPolicyAttachmentsRequest * const q);
    ListPolicyAttachmentsRequestPrivate(const ListPolicyAttachmentsRequestPrivate &other,
                                   ListPolicyAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPolicyAttachmentsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

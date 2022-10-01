// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTSREQUEST_P_H
#define QTAWS_LISTDOCUMENTSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listdocumentsrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentsRequest;

class ListDocumentsRequestPrivate : public SsmRequestPrivate {

public:
    ListDocumentsRequestPrivate(const SsmRequest::Action action,
                                   ListDocumentsRequest * const q);
    ListDocumentsRequestPrivate(const ListDocumentsRequestPrivate &other,
                                   ListDocumentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

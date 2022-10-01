// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTASSOCIATIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listassociationsrequest.h"

namespace QtAws {
namespace Ssm {

class ListAssociationsRequest;

class ListAssociationsRequestPrivate : public SsmRequestPrivate {

public:
    ListAssociationsRequestPrivate(const SsmRequest::Action action,
                                   ListAssociationsRequest * const q);
    ListAssociationsRequestPrivate(const ListAssociationsRequestPrivate &other,
                                   ListAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

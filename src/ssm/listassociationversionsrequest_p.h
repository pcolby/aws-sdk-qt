// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONVERSIONSREQUEST_P_H
#define QTAWS_LISTASSOCIATIONVERSIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listassociationversionsrequest.h"

namespace QtAws {
namespace Ssm {

class ListAssociationVersionsRequest;

class ListAssociationVersionsRequestPrivate : public SsmRequestPrivate {

public:
    ListAssociationVersionsRequestPrivate(const SsmRequest::Action action,
                                   ListAssociationVersionsRequest * const q);
    ListAssociationVersionsRequestPrivate(const ListAssociationVersionsRequestPrivate &other,
                                   ListAssociationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociationVersionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESREQUEST_P_H
#define QTAWS_LISTRESOURCESREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "listresourcesrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListResourcesRequest;

class ListResourcesRequestPrivate : public LakeFormationRequestPrivate {

public:
    ListResourcesRequestPrivate(const LakeFormationRequest::Action action,
                                   ListResourcesRequest * const q);
    ListResourcesRequestPrivate(const ListResourcesRequestPrivate &other,
                                   ListResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

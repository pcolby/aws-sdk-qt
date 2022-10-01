// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEFLEETSREQUEST_P_H
#define QTAWS_LISTINSTANCEFLEETSREQUEST_P_H

#include "emrrequest_p.h"
#include "listinstancefleetsrequest.h"

namespace QtAws {
namespace Emr {

class ListInstanceFleetsRequest;

class ListInstanceFleetsRequestPrivate : public EmrRequestPrivate {

public:
    ListInstanceFleetsRequestPrivate(const EmrRequest::Action action,
                                   ListInstanceFleetsRequest * const q);
    ListInstanceFleetsRequestPrivate(const ListInstanceFleetsRequestPrivate &other,
                                   ListInstanceFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceFleetsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

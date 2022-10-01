// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMEDQUERYREQUEST_P_H
#define QTAWS_UPDATENAMEDQUERYREQUEST_P_H

#include "athenarequest_p.h"
#include "updatenamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class UpdateNamedQueryRequest;

class UpdateNamedQueryRequestPrivate : public AthenaRequestPrivate {

public:
    UpdateNamedQueryRequestPrivate(const AthenaRequest::Action action,
                                   UpdateNamedQueryRequest * const q);
    UpdateNamedQueryRequestPrivate(const UpdateNamedQueryRequestPrivate &other,
                                   UpdateNamedQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

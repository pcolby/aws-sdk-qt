// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMEDQUERYREQUEST_P_H
#define QTAWS_DELETENAMEDQUERYREQUEST_P_H

#include "athenarequest_p.h"
#include "deletenamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class DeleteNamedQueryRequest;

class DeleteNamedQueryRequestPrivate : public AthenaRequestPrivate {

public:
    DeleteNamedQueryRequestPrivate(const AthenaRequest::Action action,
                                   DeleteNamedQueryRequest * const q);
    DeleteNamedQueryRequestPrivate(const DeleteNamedQueryRequestPrivate &other,
                                   DeleteNamedQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

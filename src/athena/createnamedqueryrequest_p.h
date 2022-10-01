// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMEDQUERYREQUEST_P_H
#define QTAWS_CREATENAMEDQUERYREQUEST_P_H

#include "athenarequest_p.h"
#include "createnamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class CreateNamedQueryRequest;

class CreateNamedQueryRequestPrivate : public AthenaRequestPrivate {

public:
    CreateNamedQueryRequestPrivate(const AthenaRequest::Action action,
                                   CreateNamedQueryRequest * const q);
    CreateNamedQueryRequestPrivate(const CreateNamedQueryRequestPrivate &other,
                                   CreateNamedQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

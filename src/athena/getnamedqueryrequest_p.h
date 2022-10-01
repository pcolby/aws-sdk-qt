// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMEDQUERYREQUEST_P_H
#define QTAWS_GETNAMEDQUERYREQUEST_P_H

#include "athenarequest_p.h"
#include "getnamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class GetNamedQueryRequest;

class GetNamedQueryRequestPrivate : public AthenaRequestPrivate {

public:
    GetNamedQueryRequestPrivate(const AthenaRequest::Action action,
                                   GetNamedQueryRequest * const q);
    GetNamedQueryRequestPrivate(const GetNamedQueryRequestPrivate &other,
                                   GetNamedQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

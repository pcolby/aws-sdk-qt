// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREPAREQUERYREQUEST_P_H
#define QTAWS_PREPAREQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "preparequeryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class PrepareQueryRequest;

class PrepareQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    PrepareQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   PrepareQueryRequest * const q);
    PrepareQueryRequestPrivate(const PrepareQueryRequestPrivate &other,
                                   PrepareQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(PrepareQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif

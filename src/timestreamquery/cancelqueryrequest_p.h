// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUERYREQUEST_P_H
#define QTAWS_CANCELQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "cancelqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class CancelQueryRequest;

class CancelQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    CancelQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   CancelQueryRequest * const q);
    CancelQueryRequestPrivate(const CancelQueryRequestPrivate &other,
                                   CancelQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif

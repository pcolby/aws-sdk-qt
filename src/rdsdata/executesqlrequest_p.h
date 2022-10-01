// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESQLREQUEST_P_H
#define QTAWS_EXECUTESQLREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "executesqlrequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteSqlRequest;

class ExecuteSqlRequestPrivate : public RdsDataRequestPrivate {

public:
    ExecuteSqlRequestPrivate(const RdsDataRequest::Action action,
                                   ExecuteSqlRequest * const q);
    ExecuteSqlRequestPrivate(const ExecuteSqlRequestPrivate &other,
                                   ExecuteSqlRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteSqlRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif

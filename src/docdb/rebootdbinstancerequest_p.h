// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCEREQUEST_P_H
#define QTAWS_REBOOTDBINSTANCEREQUEST_P_H

#include "docdbrequest_p.h"
#include "rebootdbinstancerequest.h"

namespace QtAws {
namespace DocDb {

class RebootDBInstanceRequest;

class RebootDBInstanceRequestPrivate : public DocDbRequestPrivate {

public:
    RebootDBInstanceRequestPrivate(const DocDbRequest::Action action,
                                   RebootDBInstanceRequest * const q);
    RebootDBInstanceRequestPrivate(const RebootDBInstanceRequestPrivate &other,
                                   RebootDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootDBInstanceRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCEREQUEST_P_H
#define QTAWS_REBOOTDBINSTANCEREQUEST_P_H

#include "neptunerequest_p.h"
#include "rebootdbinstancerequest.h"

namespace QtAws {
namespace Neptune {

class RebootDBInstanceRequest;

class RebootDBInstanceRequestPrivate : public NeptuneRequestPrivate {

public:
    RebootDBInstanceRequestPrivate(const NeptuneRequest::Action action,
                                   RebootDBInstanceRequest * const q);
    RebootDBInstanceRequestPrivate(const RebootDBInstanceRequestPrivate &other,
                                   RebootDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootDBInstanceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMRECOVERYPOINTREQUEST_P_H
#define QTAWS_RESTOREFROMRECOVERYPOINTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "restorefromrecoverypointrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class RestoreFromRecoveryPointRequest;

class RestoreFromRecoveryPointRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    RestoreFromRecoveryPointRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   RestoreFromRecoveryPointRequest * const q);
    RestoreFromRecoveryPointRequestPrivate(const RestoreFromRecoveryPointRequestPrivate &other,
                                   RestoreFromRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreFromRecoveryPointRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

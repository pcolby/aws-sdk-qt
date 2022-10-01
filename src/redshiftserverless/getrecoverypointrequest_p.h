// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTREQUEST_P_H
#define QTAWS_GETRECOVERYPOINTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getrecoverypointrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetRecoveryPointRequest;

class GetRecoveryPointRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetRecoveryPointRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetRecoveryPointRequest * const q);
    GetRecoveryPointRequestPrivate(const GetRecoveryPointRequestPrivate &other,
                                   GetRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecoveryPointRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

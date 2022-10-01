// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEPARAMETERSREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEPARAMETERSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabaseparametersrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseParametersRequest;

class GetRelationalDatabaseParametersRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseParametersRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseParametersRequest * const q);
    GetRelationalDatabaseParametersRequestPrivate(const GetRelationalDatabaseParametersRequestPrivate &other,
                                   GetRelationalDatabaseParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseParametersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

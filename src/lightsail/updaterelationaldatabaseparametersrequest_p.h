// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASEPARAMETERSREQUEST_P_H
#define QTAWS_UPDATERELATIONALDATABASEPARAMETERSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updaterelationaldatabaseparametersrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseParametersRequest;

class UpdateRelationalDatabaseParametersRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateRelationalDatabaseParametersRequestPrivate(const LightsailRequest::Action action,
                                   UpdateRelationalDatabaseParametersRequest * const q);
    UpdateRelationalDatabaseParametersRequestPrivate(const UpdateRelationalDatabaseParametersRequestPrivate &other,
                                   UpdateRelationalDatabaseParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRelationalDatabaseParametersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASEREQUEST_P_H
#define QTAWS_UPDATERELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updaterelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseRequest;

class UpdateRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   UpdateRelationalDatabaseRequest * const q);
    UpdateRelationalDatabaseRequestPrivate(const UpdateRelationalDatabaseRequestPrivate &other,
                                   UpdateRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

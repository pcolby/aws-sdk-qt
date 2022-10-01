// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASEREQUEST_P_H
#define QTAWS_CREATERELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseRequest;

class CreateRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    CreateRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   CreateRelationalDatabaseRequest * const q);
    CreateRelationalDatabaseRequestPrivate(const CreateRelationalDatabaseRequestPrivate &other,
                                   CreateRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

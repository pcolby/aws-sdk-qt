// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASEREQUEST_P_H
#define QTAWS_DELETERELATIONALDATABASEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleterelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseRequest;

class DeleteRelationalDatabaseRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteRelationalDatabaseRequestPrivate(const LightsailRequest::Action action,
                                   DeleteRelationalDatabaseRequest * const q);
    DeleteRelationalDatabaseRequestPrivate(const DeleteRelationalDatabaseRequestPrivate &other,
                                   DeleteRelationalDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

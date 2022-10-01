// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERREQUEST_P_H

#include "docdbrequest_p.h"
#include "createdbclusterrequest.h"

namespace QtAws {
namespace DocDb {

class CreateDBClusterRequest;

class CreateDBClusterRequestPrivate : public DocDbRequestPrivate {

public:
    CreateDBClusterRequestPrivate(const DocDbRequest::Action action,
                                   CreateDBClusterRequest * const q);
    CreateDBClusterRequestPrivate(const CreateDBClusterRequestPrivate &other,
                                   CreateDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif

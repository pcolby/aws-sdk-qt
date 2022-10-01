// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKREQUEST_P_H
#define QTAWS_DELETESTACKREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deletestackrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteStackRequest;

class DeleteStackRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeleteStackRequestPrivate(const OpsWorksRequest::Action action,
                                   DeleteStackRequest * const q);
    DeleteStackRequestPrivate(const DeleteStackRequestPrivate &other,
                                   DeleteStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

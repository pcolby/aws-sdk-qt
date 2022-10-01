// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREQUEST_P_H
#define QTAWS_DELETEAPPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deleteapprequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteAppRequest;

class DeleteAppRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeleteAppRequestPrivate(const OpsWorksRequest::Action action,
                                   DeleteAppRequest * const q);
    DeleteAppRequestPrivate(const DeleteAppRequestPrivate &other,
                                   DeleteAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

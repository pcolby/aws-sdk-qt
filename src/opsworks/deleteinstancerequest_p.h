// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEREQUEST_P_H
#define QTAWS_DELETEINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deleteinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteInstanceRequest;

class DeleteInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeleteInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   DeleteInstanceRequest * const q);
    DeleteInstanceRequestPrivate(const DeleteInstanceRequestPrivate &other,
                                   DeleteInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

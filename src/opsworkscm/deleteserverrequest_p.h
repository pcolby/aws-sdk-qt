// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERREQUEST_P_H
#define QTAWS_DELETESERVERREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "deleteserverrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DeleteServerRequest;

class DeleteServerRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DeleteServerRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DeleteServerRequest * const q);
    DeleteServerRequestPrivate(const DeleteServerRequestPrivate &other,
                                   DeleteServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif

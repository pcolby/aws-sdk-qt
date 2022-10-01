// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELUNACLIENTREQUEST_P_H
#define QTAWS_DELETELUNACLIENTREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "deletelunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class DeleteLunaClientRequest;

class DeleteLunaClientRequestPrivate : public CloudHsmRequestPrivate {

public:
    DeleteLunaClientRequestPrivate(const CloudHsmRequest::Action action,
                                   DeleteLunaClientRequest * const q);
    DeleteLunaClientRequestPrivate(const DeleteLunaClientRequestPrivate &other,
                                   DeleteLunaClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

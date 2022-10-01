// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVCENTERCLIENTREQUEST_P_H
#define QTAWS_DELETEVCENTERCLIENTREQUEST_P_H

#include "mgnrequest_p.h"
#include "deletevcenterclientrequest.h"

namespace QtAws {
namespace Mgn {

class DeleteVcenterClientRequest;

class DeleteVcenterClientRequestPrivate : public MgnRequestPrivate {

public:
    DeleteVcenterClientRequestPrivate(const MgnRequest::Action action,
                                   DeleteVcenterClientRequest * const q);
    DeleteVcenterClientRequestPrivate(const DeleteVcenterClientRequestPrivate &other,
                                   DeleteVcenterClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVcenterClientRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

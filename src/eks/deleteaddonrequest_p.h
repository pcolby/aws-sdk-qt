// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADDONREQUEST_P_H
#define QTAWS_DELETEADDONREQUEST_P_H

#include "eksrequest_p.h"
#include "deleteaddonrequest.h"

namespace QtAws {
namespace Eks {

class DeleteAddonRequest;

class DeleteAddonRequestPrivate : public EksRequestPrivate {

public:
    DeleteAddonRequestPrivate(const EksRequest::Action action,
                                   DeleteAddonRequest * const q);
    DeleteAddonRequestPrivate(const DeleteAddonRequestPrivate &other,
                                   DeleteAddonRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

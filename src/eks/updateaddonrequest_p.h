// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDONREQUEST_P_H
#define QTAWS_UPDATEADDONREQUEST_P_H

#include "eksrequest_p.h"
#include "updateaddonrequest.h"

namespace QtAws {
namespace Eks {

class UpdateAddonRequest;

class UpdateAddonRequestPrivate : public EksRequestPrivate {

public:
    UpdateAddonRequestPrivate(const EksRequest::Action action,
                                   UpdateAddonRequest * const q);
    UpdateAddonRequestPrivate(const UpdateAddonRequestPrivate &other,
                                   UpdateAddonRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

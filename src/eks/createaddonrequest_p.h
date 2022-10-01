// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDONREQUEST_P_H
#define QTAWS_CREATEADDONREQUEST_P_H

#include "eksrequest_p.h"
#include "createaddonrequest.h"

namespace QtAws {
namespace Eks {

class CreateAddonRequest;

class CreateAddonRequestPrivate : public EksRequestPrivate {

public:
    CreateAddonRequestPrivate(const EksRequest::Action action,
                                   CreateAddonRequest * const q);
    CreateAddonRequestPrivate(const CreateAddonRequestPrivate &other,
                                   CreateAddonRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

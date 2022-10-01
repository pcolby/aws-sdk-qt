// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERREQUEST_P_H
#define QTAWS_UPDATECLUSTERREQUEST_P_H

#include "daxrequest_p.h"
#include "updateclusterrequest.h"

namespace QtAws {
namespace Dax {

class UpdateClusterRequest;

class UpdateClusterRequestPrivate : public DaxRequestPrivate {

public:
    UpdateClusterRequestPrivate(const DaxRequest::Action action,
                                   UpdateClusterRequest * const q);
    UpdateClusterRequestPrivate(const UpdateClusterRequestPrivate &other,
                                   UpdateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERVERSIONREQUEST_P_H
#define QTAWS_UPDATECLUSTERVERSIONREQUEST_P_H

#include "eksrequest_p.h"
#include "updateclusterversionrequest.h"

namespace QtAws {
namespace Eks {

class UpdateClusterVersionRequest;

class UpdateClusterVersionRequestPrivate : public EksRequestPrivate {

public:
    UpdateClusterVersionRequestPrivate(const EksRequest::Action action,
                                   UpdateClusterVersionRequest * const q);
    UpdateClusterVersionRequestPrivate(const UpdateClusterVersionRequestPrivate &other,
                                   UpdateClusterVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterVersionRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

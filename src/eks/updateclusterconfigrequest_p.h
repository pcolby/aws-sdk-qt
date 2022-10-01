// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGREQUEST_P_H
#define QTAWS_UPDATECLUSTERCONFIGREQUEST_P_H

#include "eksrequest_p.h"
#include "updateclusterconfigrequest.h"

namespace QtAws {
namespace Eks {

class UpdateClusterConfigRequest;

class UpdateClusterConfigRequestPrivate : public EksRequestPrivate {

public:
    UpdateClusterConfigRequestPrivate(const EksRequest::Action action,
                                   UpdateClusterConfigRequest * const q);
    UpdateClusterConfigRequestPrivate(const UpdateClusterConfigRequestPrivate &other,
                                   UpdateClusterConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClusterConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

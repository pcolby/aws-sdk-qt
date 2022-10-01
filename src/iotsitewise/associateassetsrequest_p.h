// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSETSREQUEST_P_H
#define QTAWS_ASSOCIATEASSETSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "associateassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateAssetsRequest;

class AssociateAssetsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    AssociateAssetsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   AssociateAssetsRequest * const q);
    AssociateAssetsRequestPrivate(const AssociateAssetsRequestPrivate &other,
                                   AssociateAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

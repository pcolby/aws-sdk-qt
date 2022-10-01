// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAYERREQUEST_P_H
#define QTAWS_UPDATELAYERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updatelayerrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateLayerRequest;

class UpdateLayerRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateLayerRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateLayerRequest * const q);
    UpdateLayerRequestPrivate(const UpdateLayerRequestPrivate &other,
                                   UpdateLayerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLayerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

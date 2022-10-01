// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_P_H

#include "shieldrequest_p.h"
#include "updateapplicationlayerautomaticresponserequest.h"

namespace QtAws {
namespace Shield {

class UpdateApplicationLayerAutomaticResponseRequest;

class UpdateApplicationLayerAutomaticResponseRequestPrivate : public ShieldRequestPrivate {

public:
    UpdateApplicationLayerAutomaticResponseRequestPrivate(const ShieldRequest::Action action,
                                   UpdateApplicationLayerAutomaticResponseRequest * const q);
    UpdateApplicationLayerAutomaticResponseRequestPrivate(const UpdateApplicationLayerAutomaticResponseRequestPrivate &other,
                                   UpdateApplicationLayerAutomaticResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationLayerAutomaticResponseRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

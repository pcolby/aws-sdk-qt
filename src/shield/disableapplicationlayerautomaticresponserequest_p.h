// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_P_H
#define QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_P_H

#include "shieldrequest_p.h"
#include "disableapplicationlayerautomaticresponserequest.h"

namespace QtAws {
namespace Shield {

class DisableApplicationLayerAutomaticResponseRequest;

class DisableApplicationLayerAutomaticResponseRequestPrivate : public ShieldRequestPrivate {

public:
    DisableApplicationLayerAutomaticResponseRequestPrivate(const ShieldRequest::Action action,
                                   DisableApplicationLayerAutomaticResponseRequest * const q);
    DisableApplicationLayerAutomaticResponseRequestPrivate(const DisableApplicationLayerAutomaticResponseRequestPrivate &other,
                                   DisableApplicationLayerAutomaticResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableApplicationLayerAutomaticResponseRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

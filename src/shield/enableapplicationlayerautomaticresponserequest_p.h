// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_P_H
#define QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_P_H

#include "shieldrequest_p.h"
#include "enableapplicationlayerautomaticresponserequest.h"

namespace QtAws {
namespace Shield {

class EnableApplicationLayerAutomaticResponseRequest;

class EnableApplicationLayerAutomaticResponseRequestPrivate : public ShieldRequestPrivate {

public:
    EnableApplicationLayerAutomaticResponseRequestPrivate(const ShieldRequest::Action action,
                                   EnableApplicationLayerAutomaticResponseRequest * const q);
    EnableApplicationLayerAutomaticResponseRequestPrivate(const EnableApplicationLayerAutomaticResponseRequestPrivate &other,
                                   EnableApplicationLayerAutomaticResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableApplicationLayerAutomaticResponseRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

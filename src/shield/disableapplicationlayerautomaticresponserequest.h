// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_H
#define QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DisableApplicationLayerAutomaticResponseRequestPrivate;

class QTAWSSHIELD_EXPORT DisableApplicationLayerAutomaticResponseRequest : public ShieldRequest {

public:
    DisableApplicationLayerAutomaticResponseRequest(const DisableApplicationLayerAutomaticResponseRequest &other);
    DisableApplicationLayerAutomaticResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableApplicationLayerAutomaticResponseRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

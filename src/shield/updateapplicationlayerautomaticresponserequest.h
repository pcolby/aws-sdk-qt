// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_H
#define QTAWS_UPDATEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class UpdateApplicationLayerAutomaticResponseRequestPrivate;

class QTAWSSHIELD_EXPORT UpdateApplicationLayerAutomaticResponseRequest : public ShieldRequest {

public:
    UpdateApplicationLayerAutomaticResponseRequest(const UpdateApplicationLayerAutomaticResponseRequest &other);
    UpdateApplicationLayerAutomaticResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationLayerAutomaticResponseRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

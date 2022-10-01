// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_H
#define QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSEREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class EnableApplicationLayerAutomaticResponseRequestPrivate;

class QTAWSSHIELD_EXPORT EnableApplicationLayerAutomaticResponseRequest : public ShieldRequest {

public:
    EnableApplicationLayerAutomaticResponseRequest(const EnableApplicationLayerAutomaticResponseRequest &other);
    EnableApplicationLayerAutomaticResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableApplicationLayerAutomaticResponseRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRUSTANCHORREQUEST_H
#define QTAWS_DISABLETRUSTANCHORREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableTrustAnchorRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT DisableTrustAnchorRequest : public RolesAnywhereRequest {

public:
    DisableTrustAnchorRequest(const DisableTrustAnchorRequest &other);
    DisableTrustAnchorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

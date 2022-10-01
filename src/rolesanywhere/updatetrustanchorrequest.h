// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTANCHORREQUEST_H
#define QTAWS_UPDATETRUSTANCHORREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateTrustAnchorRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT UpdateTrustAnchorRequest : public RolesAnywhereRequest {

public:
    UpdateTrustAnchorRequest(const UpdateTrustAnchorRequest &other);
    UpdateTrustAnchorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

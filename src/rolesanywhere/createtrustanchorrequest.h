// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTANCHORREQUEST_H
#define QTAWS_CREATETRUSTANCHORREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateTrustAnchorRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT CreateTrustAnchorRequest : public RolesAnywhereRequest {

public:
    CreateTrustAnchorRequest(const CreateTrustAnchorRequest &other);
    CreateTrustAnchorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

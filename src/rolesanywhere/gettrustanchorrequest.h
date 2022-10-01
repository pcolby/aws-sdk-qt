// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTANCHORREQUEST_H
#define QTAWS_GETTRUSTANCHORREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetTrustAnchorRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT GetTrustAnchorRequest : public RolesAnywhereRequest {

public:
    GetTrustAnchorRequest(const GetTrustAnchorRequest &other);
    GetTrustAnchorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

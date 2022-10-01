// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTANCHORREQUEST_H
#define QTAWS_DELETETRUSTANCHORREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteTrustAnchorRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT DeleteTrustAnchorRequest : public RolesAnywhereRequest {

public:
    DeleteTrustAnchorRequest(const DeleteTrustAnchorRequest &other);
    DeleteTrustAnchorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

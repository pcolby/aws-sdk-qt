// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTANCHORSREQUEST_H
#define QTAWS_LISTTRUSTANCHORSREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListTrustAnchorsRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT ListTrustAnchorsRequest : public RolesAnywhereRequest {

public:
    ListTrustAnchorsRequest(const ListTrustAnchorsRequest &other);
    ListTrustAnchorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrustAnchorsRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

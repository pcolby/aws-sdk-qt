// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILEPERMISSIONSREQUEST_H
#define QTAWS_LISTSECURITYPROFILEPERMISSIONSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityProfilePermissionsRequestPrivate;

class QTAWSCONNECT_EXPORT ListSecurityProfilePermissionsRequest : public ConnectRequest {

public:
    ListSecurityProfilePermissionsRequest(const ListSecurityProfilePermissionsRequest &other);
    ListSecurityProfilePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityProfilePermissionsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

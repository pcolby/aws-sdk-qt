// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESREQUEST_H
#define QTAWS_LISTSECURITYPROFILESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityProfilesRequestPrivate;

class QTAWSCONNECT_EXPORT ListSecurityProfilesRequest : public ConnectRequest {

public:
    ListSecurityProfilesRequest(const ListSecurityProfilesRequest &other);
    ListSecurityProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

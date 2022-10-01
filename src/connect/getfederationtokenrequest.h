// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEDERATIONTOKENREQUEST_H
#define QTAWS_GETFEDERATIONTOKENREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class GetFederationTokenRequestPrivate;

class QTAWSCONNECT_EXPORT GetFederationTokenRequest : public ConnectRequest {

public:
    GetFederationTokenRequest(const GetFederationTokenRequest &other);
    GetFederationTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFederationTokenRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

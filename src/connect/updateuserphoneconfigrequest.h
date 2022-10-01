// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPHONECONFIGREQUEST_H
#define QTAWS_UPDATEUSERPHONECONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserPhoneConfigRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateUserPhoneConfigRequest : public ConnectRequest {

public:
    UpdateUserPhoneConfigRequest(const UpdateUserPhoneConfigRequest &other);
    UpdateUserPhoneConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserPhoneConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

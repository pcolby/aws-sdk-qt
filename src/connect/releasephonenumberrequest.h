// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEPHONENUMBERREQUEST_H
#define QTAWS_RELEASEPHONENUMBERREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ReleasePhoneNumberRequestPrivate;

class QTAWSCONNECT_EXPORT ReleasePhoneNumberRequest : public ConnectRequest {

public:
    ReleasePhoneNumberRequest(const ReleasePhoneNumberRequest &other);
    ReleasePhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleasePhoneNumberRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

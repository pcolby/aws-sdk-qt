// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSREQUEST_H
#define QTAWS_GETBLACKLISTREPORTSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetBlacklistReportsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetBlacklistReportsRequest : public PinpointEmailRequest {

public:
    GetBlacklistReportsRequest(const GetBlacklistReportsRequest &other);
    GetBlacklistReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlacklistReportsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

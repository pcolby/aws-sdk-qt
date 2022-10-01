// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAUNCHAPPREQUEST_H
#define QTAWS_LAUNCHAPPREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class LaunchAppRequestPrivate;

class QTAWSSMS_EXPORT LaunchAppRequest : public SmsRequest {

public:
    LaunchAppRequest(const LaunchAppRequest &other);
    LaunchAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LaunchAppRequest)

};

} // namespace Sms
} // namespace QtAws

#endif

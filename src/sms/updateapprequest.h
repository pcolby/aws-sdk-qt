// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPREQUEST_H
#define QTAWS_UPDATEAPPREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class UpdateAppRequestPrivate;

class QTAWSSMS_EXPORT UpdateAppRequest : public SmsRequest {

public:
    UpdateAppRequest(const UpdateAppRequest &other);
    UpdateAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppRequest)

};

} // namespace Sms
} // namespace QtAws

#endif

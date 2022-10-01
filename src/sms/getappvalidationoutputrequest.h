// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONOUTPUTREQUEST_H
#define QTAWS_GETAPPVALIDATIONOUTPUTREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetAppValidationOutputRequestPrivate;

class QTAWSSMS_EXPORT GetAppValidationOutputRequest : public SmsRequest {

public:
    GetAppValidationOutputRequest(const GetAppValidationOutputRequest &other);
    GetAppValidationOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppValidationOutputRequest)

};

} // namespace Sms
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATETEMPLATEREQUEST_H
#define QTAWS_GENERATETEMPLATEREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GenerateTemplateRequestPrivate;

class QTAWSSMS_EXPORT GenerateTemplateRequest : public SmsRequest {

public:
    GenerateTemplateRequest(const GenerateTemplateRequest &other);
    GenerateTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateTemplateRequest)

};

} // namespace Sms
} // namespace QtAws

#endif

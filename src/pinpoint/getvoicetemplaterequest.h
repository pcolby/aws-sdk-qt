// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICETEMPLATEREQUEST_H
#define QTAWS_GETVOICETEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT GetVoiceTemplateRequest : public PinpointRequest {

public:
    GetVoiceTemplateRequest(const GetVoiceTemplateRequest &other);
    GetVoiceTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

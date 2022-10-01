// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICETEMPLATEREQUEST_H
#define QTAWS_UPDATEVOICETEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateVoiceTemplateRequest : public PinpointRequest {

public:
    UpdateVoiceTemplateRequest(const UpdateVoiceTemplateRequest &other);
    UpdateVoiceTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

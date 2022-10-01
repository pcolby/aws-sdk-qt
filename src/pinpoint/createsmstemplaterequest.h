// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSTEMPLATEREQUEST_H
#define QTAWS_CREATESMSTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateSmsTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT CreateSmsTemplateRequest : public PinpointRequest {

public:
    CreateSmsTemplateRequest(const CreateSmsTemplateRequest &other);
    CreateSmsTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUSHTEMPLATEREQUEST_H
#define QTAWS_CREATEPUSHTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreatePushTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT CreatePushTemplateRequest : public PinpointRequest {

public:
    CreatePushTemplateRequest(const CreatePushTemplateRequest &other);
    CreatePushTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

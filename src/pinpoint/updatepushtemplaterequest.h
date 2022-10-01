// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUSHTEMPLATEREQUEST_H
#define QTAWS_UPDATEPUSHTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdatePushTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdatePushTemplateRequest : public PinpointRequest {

public:
    UpdatePushTemplateRequest(const UpdatePushTemplateRequest &other);
    UpdatePushTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

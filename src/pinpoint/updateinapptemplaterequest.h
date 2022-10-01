// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINAPPTEMPLATEREQUEST_H
#define QTAWS_UPDATEINAPPTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateInAppTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateInAppTemplateRequest : public PinpointRequest {

public:
    UpdateInAppTemplateRequest(const UpdateInAppTemplateRequest &other);
    UpdateInAppTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

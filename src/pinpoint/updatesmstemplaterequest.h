// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSTEMPLATEREQUEST_H
#define QTAWS_UPDATESMSTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateSmsTemplateRequest : public PinpointRequest {

public:
    UpdateSmsTemplateRequest(const UpdateSmsTemplateRequest &other);
    UpdateSmsTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

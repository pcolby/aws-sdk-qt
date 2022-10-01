// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILTEMPLATEREQUEST_H
#define QTAWS_UPDATEEMAILTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateEmailTemplateRequest : public PinpointRequest {

public:
    UpdateEmailTemplateRequest(const UpdateEmailTemplateRequest &other);
    UpdateEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

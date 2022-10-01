// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINAPPTEMPLATEREQUEST_H
#define QTAWS_CREATEINAPPTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateInAppTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT CreateInAppTemplateRequest : public PinpointRequest {

public:
    CreateInAppTemplateRequest(const CreateInAppTemplateRequest &other);
    CreateInAppTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

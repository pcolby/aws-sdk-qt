// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILTEMPLATEREQUEST_H
#define QTAWS_GETEMAILTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT GetEmailTemplateRequest : public PinpointRequest {

public:
    GetEmailTemplateRequest(const GetEmailTemplateRequest &other);
    GetEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPTEMPLATEREQUEST_H
#define QTAWS_GETINAPPTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT GetInAppTemplateRequest : public PinpointRequest {

public:
    GetInAppTemplateRequest(const GetInAppTemplateRequest &other);
    GetInAppTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

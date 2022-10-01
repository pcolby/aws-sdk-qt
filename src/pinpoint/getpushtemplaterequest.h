// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUSHTEMPLATEREQUEST_H
#define QTAWS_GETPUSHTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetPushTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT GetPushTemplateRequest : public PinpointRequest {

public:
    GetPushTemplateRequest(const GetPushTemplateRequest &other);
    GetPushTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

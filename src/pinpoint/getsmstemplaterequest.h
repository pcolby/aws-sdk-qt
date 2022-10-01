// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSTEMPLATEREQUEST_H
#define QTAWS_GETSMSTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT GetSmsTemplateRequest : public PinpointRequest {

public:
    GetSmsTemplateRequest(const GetSmsTemplateRequest &other);
    GetSmsTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSTEMPLATEREQUEST_H
#define QTAWS_DELETESMSTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteSmsTemplateRequest : public PinpointRequest {

public:
    DeleteSmsTemplateRequest(const DeleteSmsTemplateRequest &other);
    DeleteSmsTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

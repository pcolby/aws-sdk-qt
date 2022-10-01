// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUSHTEMPLATEREQUEST_H
#define QTAWS_DELETEPUSHTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeletePushTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT DeletePushTemplateRequest : public PinpointRequest {

public:
    DeletePushTemplateRequest(const DeletePushTemplateRequest &other);
    DeletePushTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

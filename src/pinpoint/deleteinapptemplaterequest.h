// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINAPPTEMPLATEREQUEST_H
#define QTAWS_DELETEINAPPTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteInAppTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteInAppTemplateRequest : public PinpointRequest {

public:
    DeleteInAppTemplateRequest(const DeleteInAppTemplateRequest &other);
    DeleteInAppTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

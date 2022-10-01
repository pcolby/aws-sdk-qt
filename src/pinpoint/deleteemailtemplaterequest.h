// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATEREQUEST_H
#define QTAWS_DELETEEMAILTEMPLATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailTemplateRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteEmailTemplateRequest : public PinpointRequest {

public:
    DeleteEmailTemplateRequest(const DeleteEmailTemplateRequest &other);
    DeleteEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

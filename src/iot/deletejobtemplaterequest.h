// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATEREQUEST_H
#define QTAWS_DELETEJOBTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteJobTemplateRequestPrivate;

class QTAWSIOT_EXPORT DeleteJobTemplateRequest : public IoTRequest {

public:
    DeleteJobTemplateRequest(const DeleteJobTemplateRequest &other);
    DeleteJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

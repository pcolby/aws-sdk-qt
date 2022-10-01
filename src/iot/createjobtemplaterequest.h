// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBTEMPLATEREQUEST_H
#define QTAWS_CREATEJOBTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateJobTemplateRequestPrivate;

class QTAWSIOT_EXPORT CreateJobTemplateRequest : public IoTRequest {

public:
    CreateJobTemplateRequest(const CreateJobTemplateRequest &other);
    CreateJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

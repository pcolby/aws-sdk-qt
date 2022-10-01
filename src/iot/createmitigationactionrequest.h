// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMITIGATIONACTIONREQUEST_H
#define QTAWS_CREATEMITIGATIONACTIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateMitigationActionRequestPrivate;

class QTAWSIOT_EXPORT CreateMitigationActionRequest : public IoTRequest {

public:
    CreateMitigationActionRequest(const CreateMitigationActionRequest &other);
    CreateMitigationActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

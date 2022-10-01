// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRATIONCODEREQUEST_H
#define QTAWS_DELETEREGISTRATIONCODEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteRegistrationCodeRequestPrivate;

class QTAWSIOT_EXPORT DeleteRegistrationCodeRequest : public IoTRequest {

public:
    DeleteRegistrationCodeRequest(const DeleteRegistrationCodeRequest &other);
    DeleteRegistrationCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegistrationCodeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

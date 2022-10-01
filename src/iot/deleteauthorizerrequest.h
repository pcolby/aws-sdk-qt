// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHORIZERREQUEST_H
#define QTAWS_DELETEAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT DeleteAuthorizerRequest : public IoTRequest {

public:
    DeleteAuthorizerRequest(const DeleteAuthorizerRequest &other);
    DeleteAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

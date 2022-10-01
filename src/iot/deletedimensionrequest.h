// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIMENSIONREQUEST_H
#define QTAWS_DELETEDIMENSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDimensionRequestPrivate;

class QTAWSIOT_EXPORT DeleteDimensionRequest : public IoTRequest {

public:
    DeleteDimensionRequest(const DeleteDimensionRequest &other);
    DeleteDimensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

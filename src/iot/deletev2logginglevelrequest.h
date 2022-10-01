// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEV2LOGGINGLEVELREQUEST_H
#define QTAWS_DELETEV2LOGGINGLEVELREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteV2LoggingLevelRequestPrivate;

class QTAWSIOT_EXPORT DeleteV2LoggingLevelRequest : public IoTRequest {

public:
    DeleteV2LoggingLevelRequest(const DeleteV2LoggingLevelRequest &other);
    DeleteV2LoggingLevelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteV2LoggingLevelRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMITIGATIONACTIONREQUEST_H
#define QTAWS_DELETEMITIGATIONACTIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteMitigationActionRequestPrivate;

class QTAWSIOT_EXPORT DeleteMitigationActionRequest : public IoTRequest {

public:
    DeleteMitigationActionRequest(const DeleteMitigationActionRequest &other);
    DeleteMitigationActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

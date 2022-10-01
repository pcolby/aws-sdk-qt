// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMITIGATIONACTIONREQUEST_H
#define QTAWS_UPDATEMITIGATIONACTIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateMitigationActionRequestPrivate;

class QTAWSIOT_EXPORT UpdateMitigationActionRequest : public IoTRequest {

public:
    UpdateMitigationActionRequest(const UpdateMitigationActionRequest &other);
    UpdateMitigationActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

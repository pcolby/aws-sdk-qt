// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBREQUEST_H
#define QTAWS_UPDATEJOBREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateJobRequestPrivate;

class QTAWSIOT_EXPORT UpdateJobRequest : public IoTRequest {

public:
    UpdateJobRequest(const UpdateJobRequest &other);
    UpdateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

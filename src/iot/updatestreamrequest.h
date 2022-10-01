// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMREQUEST_H
#define QTAWS_UPDATESTREAMREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateStreamRequestPrivate;

class QTAWSIOT_EXPORT UpdateStreamRequest : public IoTRequest {

public:
    UpdateStreamRequest(const UpdateStreamRequest &other);
    UpdateStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

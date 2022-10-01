// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXINGCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEINDEXINGCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateIndexingConfigurationRequestPrivate;

class QTAWSIOT_EXPORT UpdateIndexingConfigurationRequest : public IoTRequest {

public:
    UpdateIndexingConfigurationRequest(const UpdateIndexingConfigurationRequest &other);
    UpdateIndexingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIndexingConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINDEXINGCONFIGURATIONREQUEST_H
#define QTAWS_GETINDEXINGCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetIndexingConfigurationRequestPrivate;

class QTAWSIOT_EXPORT GetIndexingConfigurationRequest : public IoTRequest {

public:
    GetIndexingConfigurationRequest(const GetIndexingConfigurationRequest &other);
    GetIndexingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIndexingConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

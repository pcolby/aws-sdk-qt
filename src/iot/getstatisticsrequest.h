// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATISTICSREQUEST_H
#define QTAWS_GETSTATISTICSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetStatisticsRequestPrivate;

class QTAWSIOT_EXPORT GetStatisticsRequest : public IoTRequest {

public:
    GetStatisticsRequest(const GetStatisticsRequest &other);
    GetStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStatisticsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

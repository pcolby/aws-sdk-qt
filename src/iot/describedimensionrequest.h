// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONREQUEST_H
#define QTAWS_DESCRIBEDIMENSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDimensionRequestPrivate;

class QTAWSIOT_EXPORT DescribeDimensionRequest : public IoTRequest {

public:
    DescribeDimensionRequest(const DescribeDimensionRequest &other);
    DescribeDimensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDimensionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

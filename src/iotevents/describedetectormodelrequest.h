// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELREQUEST_H
#define QTAWS_DESCRIBEDETECTORMODELREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelRequestPrivate;

class QTAWSIOTEVENTS_EXPORT DescribeDetectorModelRequest : public IoTEventsRequest {

public:
    DescribeDetectorModelRequest(const DescribeDetectorModelRequest &other);
    DescribeDetectorModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

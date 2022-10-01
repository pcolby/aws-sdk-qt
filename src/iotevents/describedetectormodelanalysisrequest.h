// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELANALYSISREQUEST_H
#define QTAWS_DESCRIBEDETECTORMODELANALYSISREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelAnalysisRequestPrivate;

class QTAWSIOTEVENTS_EXPORT DescribeDetectorModelAnalysisRequest : public IoTEventsRequest {

public:
    DescribeDetectorModelAnalysisRequest(const DescribeDetectorModelAnalysisRequest &other);
    DescribeDetectorModelAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectorModelAnalysisRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORREQUEST_H
#define QTAWS_DESCRIBEDETECTORREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeDetectorRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT DescribeDetectorRequest : public IoTEventsDataRequest {

public:
    DescribeDetectorRequest(const DescribeDetectorRequest &other);
    DescribeDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectorRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif

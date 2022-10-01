// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOURSOFOPERATIONREQUEST_H
#define QTAWS_DESCRIBEHOURSOFOPERATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeHoursOfOperationRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeHoursOfOperationRequest : public ConnectRequest {

public:
    DescribeHoursOfOperationRequest(const DescribeHoursOfOperationRequest &other);
    DescribeHoursOfOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONDITIONALFORWARDERSREQUEST_H
#define QTAWS_DESCRIBECONDITIONALFORWARDERSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeConditionalForwardersRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeConditionalForwardersRequest : public DirectoryServiceRequest {

public:
    DescribeConditionalForwardersRequest(const DescribeConditionalForwardersRequest &other);
    DescribeConditionalForwardersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConditionalForwardersRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

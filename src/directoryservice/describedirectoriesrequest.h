// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORIESREQUEST_H
#define QTAWS_DESCRIBEDIRECTORIESREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDirectoriesRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeDirectoriesRequest : public DirectoryServiceRequest {

public:
    DescribeDirectoriesRequest(const DescribeDirectoriesRequest &other);
    DescribeDirectoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectoriesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESHAREDDIRECTORIESREQUEST_H
#define QTAWS_DESCRIBESHAREDDIRECTORIESREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSharedDirectoriesRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeSharedDirectoriesRequest : public DirectoryServiceRequest {

public:
    DescribeSharedDirectoriesRequest(const DescribeSharedDirectoriesRequest &other);
    DescribeSharedDirectoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSharedDirectoriesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

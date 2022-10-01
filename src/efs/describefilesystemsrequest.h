// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMSREQUEST_H
#define QTAWS_DESCRIBEFILESYSTEMSREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemsRequestPrivate;

class QTAWSEFS_EXPORT DescribeFileSystemsRequest : public EfsRequest {

public:
    DescribeFileSystemsRequest(const DescribeFileSystemsRequest &other);
    DescribeFileSystemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif

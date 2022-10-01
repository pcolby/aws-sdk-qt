// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryAssociationsRequestPrivate;

class QTAWSFSX_EXPORT DescribeDataRepositoryAssociationsRequest : public FSxRequest {

public:
    DescribeDataRepositoryAssociationsRequest(const DescribeDataRepositoryAssociationsRequest &other);
    DescribeDataRepositoryAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataRepositoryAssociationsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

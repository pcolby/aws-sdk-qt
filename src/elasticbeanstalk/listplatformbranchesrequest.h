// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMBRANCHESREQUEST_H
#define QTAWS_LISTPLATFORMBRANCHESREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformBranchesRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ListPlatformBranchesRequest : public ElasticBeanstalkRequest {

public:
    ListPlatformBranchesRequest(const ListPlatformBranchesRequest &other);
    ListPlatformBranchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlatformBranchesRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

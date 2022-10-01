// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHREQUEST_H
#define QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeResourceCollectionHealthRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeResourceCollectionHealthRequest : public DevOpsGuruRequest {

public:
    DescribeResourceCollectionHealthRequest(const DescribeResourceCollectionHealthRequest &other);
    DescribeResourceCollectionHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceCollectionHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

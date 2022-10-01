// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEREQUEST_H
#define QTAWS_DESCRIBERESOURCEREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class DescribeResourceRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT DescribeResourceRequest : public LakeFormationRequest {

public:
    DescribeResourceRequest(const DescribeResourceRequest &other);
    DescribeResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

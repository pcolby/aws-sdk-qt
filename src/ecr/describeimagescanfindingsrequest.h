// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESCANFINDINGSREQUEST_H
#define QTAWS_DESCRIBEIMAGESCANFINDINGSREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeImageScanFindingsRequestPrivate;

class QTAWSECR_EXPORT DescribeImageScanFindingsRequest : public EcrRequest {

public:
    DescribeImageScanFindingsRequest(const DescribeImageScanFindingsRequest &other);
    DescribeImageScanFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageScanFindingsRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHARVESTJOBREQUEST_H
#define QTAWS_DESCRIBEHARVESTJOBREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeHarvestJobRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT DescribeHarvestJobRequest : public MediaPackageRequest {

public:
    DescribeHarvestJobRequest(const DescribeHarvestJobRequest &other);
    DescribeHarvestJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHarvestJobRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

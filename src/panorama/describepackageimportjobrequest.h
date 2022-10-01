// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBEPACKAGEIMPORTJOBREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DescribePackageImportJobRequestPrivate;

class QTAWSPANORAMA_EXPORT DescribePackageImportJobRequest : public PanoramaRequest {

public:
    DescribePackageImportJobRequest(const DescribePackageImportJobRequest &other);
    DescribePackageImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageImportJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

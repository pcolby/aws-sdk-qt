// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHARVESTJOBSREQUEST_H
#define QTAWS_LISTHARVESTJOBSREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class ListHarvestJobsRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT ListHarvestJobsRequest : public MediaPackageRequest {

public:
    ListHarvestJobsRequest(const ListHarvestJobsRequest &other);
    ListHarvestJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHarvestJobsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

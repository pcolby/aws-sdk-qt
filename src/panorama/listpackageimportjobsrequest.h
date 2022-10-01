// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEIMPORTJOBSREQUEST_H
#define QTAWS_LISTPACKAGEIMPORTJOBSREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListPackageImportJobsRequestPrivate;

class QTAWSPANORAMA_EXPORT ListPackageImportJobsRequest : public PanoramaRequest {

public:
    ListPackageImportJobsRequest(const ListPackageImportJobsRequest &other);
    ListPackageImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageImportJobsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

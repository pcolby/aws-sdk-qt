// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKIMPORTJOBSREQUEST_H
#define QTAWS_LISTBULKIMPORTJOBSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListBulkImportJobsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT ListBulkImportJobsRequest : public IoTSiteWiseRequest {

public:
    ListBulkImportJobsRequest(const ListBulkImportJobsRequest &other);
    ListBulkImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBulkImportJobsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

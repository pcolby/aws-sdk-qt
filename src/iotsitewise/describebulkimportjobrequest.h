// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBULKIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBEBULKIMPORTJOBREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeBulkImportJobRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeBulkImportJobRequest : public IoTSiteWiseRequest {

public:
    DescribeBulkImportJobRequest(const DescribeBulkImportJobRequest &other);
    DescribeBulkImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBulkImportJobRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

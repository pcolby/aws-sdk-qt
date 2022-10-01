// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMPORTDATAREQUEST_H
#define QTAWS_BATCHDELETEIMPORTDATAREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class BatchDeleteImportDataRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT BatchDeleteImportDataRequest : public ApplicationDiscoveryRequest {

public:
    BatchDeleteImportDataRequest(const BatchDeleteImportDataRequest &other);
    BatchDeleteImportDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteImportDataRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMPORTDATARESPONSE_H
#define QTAWS_BATCHDELETEIMPORTDATARESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "batchdeleteimportdatarequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class BatchDeleteImportDataResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT BatchDeleteImportDataResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    BatchDeleteImportDataResponse(const BatchDeleteImportDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteImportDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteImportDataResponse)
    Q_DISABLE_COPY(BatchDeleteImportDataResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

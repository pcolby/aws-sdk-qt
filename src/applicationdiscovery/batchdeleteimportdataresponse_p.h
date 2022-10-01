// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMPORTDATARESPONSE_P_H
#define QTAWS_BATCHDELETEIMPORTDATARESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class BatchDeleteImportDataResponse;

class BatchDeleteImportDataResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit BatchDeleteImportDataResponsePrivate(BatchDeleteImportDataResponse * const q);

    void parseBatchDeleteImportDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteImportDataResponse)
    Q_DISABLE_COPY(BatchDeleteImportDataResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

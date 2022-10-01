// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICESOFTWAREUPDATERESPONSE_P_H
#define QTAWS_CANCELSERVICESOFTWAREUPDATERESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class CancelServiceSoftwareUpdateResponse;

class CancelServiceSoftwareUpdateResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit CancelServiceSoftwareUpdateResponsePrivate(CancelServiceSoftwareUpdateResponse * const q);

    void parseCancelServiceSoftwareUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(CancelServiceSoftwareUpdateResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

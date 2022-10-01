// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVICESOFTWAREUPDATERESPONSE_P_H
#define QTAWS_STARTSERVICESOFTWAREUPDATERESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class StartServiceSoftwareUpdateResponse;

class StartServiceSoftwareUpdateResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit StartServiceSoftwareUpdateResponsePrivate(StartServiceSoftwareUpdateResponse * const q);

    void parseStartServiceSoftwareUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(StartServiceSoftwareUpdateResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

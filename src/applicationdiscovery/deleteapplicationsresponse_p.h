// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DeleteApplicationsResponse;

class DeleteApplicationsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit DeleteApplicationsResponsePrivate(DeleteApplicationsResponse * const q);

    void parseDeleteApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationsResponse)
    Q_DISABLE_COPY(DeleteApplicationsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

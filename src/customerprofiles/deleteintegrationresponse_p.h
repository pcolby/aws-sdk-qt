// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSE_P_H
#define QTAWS_DELETEINTEGRATIONRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteIntegrationResponse;

class DeleteIntegrationResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit DeleteIntegrationResponsePrivate(DeleteIntegrationResponse * const q);

    void parseDeleteIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationResponse)
    Q_DISABLE_COPY(DeleteIntegrationResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

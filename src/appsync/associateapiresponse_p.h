// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPIRESPONSE_P_H
#define QTAWS_ASSOCIATEAPIRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class AssociateApiResponse;

class AssociateApiResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit AssociateApiResponsePrivate(AssociateApiResponse * const q);

    void parseAssociateApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateApiResponse)
    Q_DISABLE_COPY(AssociateApiResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

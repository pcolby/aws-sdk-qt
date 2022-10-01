// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIASSOCIATIONRESPONSE_P_H
#define QTAWS_GETAPIASSOCIATIONRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetApiAssociationResponse;

class GetApiAssociationResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetApiAssociationResponsePrivate(GetApiAssociationResponse * const q);

    void parseGetApiAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApiAssociationResponse)
    Q_DISABLE_COPY(GetApiAssociationResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif

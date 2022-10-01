// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTSTORERESPONSE_P_H
#define QTAWS_UPDATETRUSTSTORERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateTrustStoreResponse;

class UpdateTrustStoreResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit UpdateTrustStoreResponsePrivate(UpdateTrustStoreResponse * const q);

    void parseUpdateTrustStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrustStoreResponse)
    Q_DISABLE_COPY(UpdateTrustStoreResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

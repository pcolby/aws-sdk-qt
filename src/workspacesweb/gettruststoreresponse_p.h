// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTORERESPONSE_P_H
#define QTAWS_GETTRUSTSTORERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreResponse;

class GetTrustStoreResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetTrustStoreResponsePrivate(GetTrustStoreResponse * const q);

    void parseGetTrustStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrustStoreResponse)
    Q_DISABLE_COPY(GetTrustStoreResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

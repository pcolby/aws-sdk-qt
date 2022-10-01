// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUSTSTORERESPONSE_P_H
#define QTAWS_ASSOCIATETRUSTSTORERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateTrustStoreResponse;

class AssociateTrustStoreResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit AssociateTrustStoreResponsePrivate(AssociateTrustStoreResponse * const q);

    void parseAssociateTrustStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTrustStoreResponse)
    Q_DISABLE_COPY(AssociateTrustStoreResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

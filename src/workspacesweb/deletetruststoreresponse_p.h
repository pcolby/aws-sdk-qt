// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTSTORERESPONSE_P_H
#define QTAWS_DELETETRUSTSTORERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteTrustStoreResponse;

class DeleteTrustStoreResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DeleteTrustStoreResponsePrivate(DeleteTrustStoreResponse * const q);

    void parseDeleteTrustStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrustStoreResponse)
    Q_DISABLE_COPY(DeleteTrustStoreResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

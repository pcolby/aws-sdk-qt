// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUSTSTORERESPONSE_H
#define QTAWS_ASSOCIATETRUSTSTORERESPONSE_H

#include "workspaceswebresponse.h"
#include "associatetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateTrustStoreResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateTrustStoreResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    AssociateTrustStoreResponse(const AssociateTrustStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTrustStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTrustStoreResponse)
    Q_DISABLE_COPY(AssociateTrustStoreResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

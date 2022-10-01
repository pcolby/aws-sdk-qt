// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTORERESPONSE_H
#define QTAWS_GETTRUSTSTORERESPONSE_H

#include "workspaceswebresponse.h"
#include "gettruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetTrustStoreResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetTrustStoreResponse(const GetTrustStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrustStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrustStoreResponse)
    Q_DISABLE_COPY(GetTrustStoreResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

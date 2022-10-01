// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTSTORERESPONSE_H
#define QTAWS_DELETETRUSTSTORERESPONSE_H

#include "workspaceswebresponse.h"
#include "deletetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteTrustStoreResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteTrustStoreResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DeleteTrustStoreResponse(const DeleteTrustStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrustStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrustStoreResponse)
    Q_DISABLE_COPY(DeleteTrustStoreResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

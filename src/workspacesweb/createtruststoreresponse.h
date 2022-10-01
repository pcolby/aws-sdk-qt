// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTSTORERESPONSE_H
#define QTAWS_CREATETRUSTSTORERESPONSE_H

#include "workspaceswebresponse.h"
#include "createtruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateTrustStoreResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateTrustStoreResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    CreateTrustStoreResponse(const CreateTrustStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrustStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrustStoreResponse)
    Q_DISABLE_COPY(CreateTrustStoreResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

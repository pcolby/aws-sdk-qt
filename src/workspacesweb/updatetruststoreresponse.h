// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTSTORERESPONSE_H
#define QTAWS_UPDATETRUSTSTORERESPONSE_H

#include "workspaceswebresponse.h"
#include "updatetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateTrustStoreResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateTrustStoreResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    UpdateTrustStoreResponse(const UpdateTrustStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrustStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrustStoreResponse)
    Q_DISABLE_COPY(UpdateTrustStoreResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

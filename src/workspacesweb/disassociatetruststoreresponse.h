// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUSTSTORERESPONSE_H
#define QTAWS_DISASSOCIATETRUSTSTORERESPONSE_H

#include "workspaceswebresponse.h"
#include "disassociatetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateTrustStoreResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateTrustStoreResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DisassociateTrustStoreResponse(const DisassociateTrustStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTrustStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrustStoreResponse)
    Q_DISABLE_COPY(DisassociateTrustStoreResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

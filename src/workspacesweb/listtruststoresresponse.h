// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORESRESPONSE_H
#define QTAWS_LISTTRUSTSTORESRESPONSE_H

#include "workspaceswebresponse.h"
#include "listtruststoresrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoresResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListTrustStoresResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListTrustStoresResponse(const ListTrustStoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrustStoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrustStoresResponse)
    Q_DISABLE_COPY(ListTrustStoresResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif

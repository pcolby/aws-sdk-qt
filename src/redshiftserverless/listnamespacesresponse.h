// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMESPACESRESPONSE_H
#define QTAWS_LISTNAMESPACESRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "listnamespacesrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListNamespacesResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListNamespacesResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ListNamespacesResponse(const ListNamespacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNamespacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamespacesResponse)
    Q_DISABLE_COPY(ListNamespacesResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

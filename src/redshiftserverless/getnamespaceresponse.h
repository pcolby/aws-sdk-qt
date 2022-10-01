// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACERESPONSE_H
#define QTAWS_GETNAMESPACERESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getnamespacerequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetNamespaceResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetNamespaceResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetNamespaceResponse(const GetNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamespaceResponse)
    Q_DISABLE_COPY(GetNamespaceResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

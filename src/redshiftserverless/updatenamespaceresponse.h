// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMESPACERESPONSE_H
#define QTAWS_UPDATENAMESPACERESPONSE_H

#include "redshiftserverlessresponse.h"
#include "updatenamespacerequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateNamespaceResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT UpdateNamespaceResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    UpdateNamespaceResponse(const UpdateNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNamespaceResponse)
    Q_DISABLE_COPY(UpdateNamespaceResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMESPACERESPONSE_H
#define QTAWS_CREATENAMESPACERESPONSE_H

#include "redshiftserverlessresponse.h"
#include "createnamespacerequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateNamespaceResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateNamespaceResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    CreateNamespaceResponse(const CreateNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNamespaceResponse)
    Q_DISABLE_COPY(CreateNamespaceResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

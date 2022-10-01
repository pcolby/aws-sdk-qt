// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACERESPONSE_H
#define QTAWS_DELETENAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "deletenamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeleteNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT DeleteNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    DeleteNamespaceResponse(const DeleteNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNamespaceResponse)
    Q_DISABLE_COPY(DeleteNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif

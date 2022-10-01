// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACERESPONSE_H
#define QTAWS_DELETENAMESPACERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "deletenamespacerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteNamespaceResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteNamespaceResponse : public IoTThingsGraphResponse {
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

} // namespace IoTThingsGraph
} // namespace QtAws

#endif

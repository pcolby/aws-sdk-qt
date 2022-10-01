// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACERESPONSE_H
#define QTAWS_DELETENAMESPACERESPONSE_H

#include "quicksightresponse.h"
#include "deletenamespacerequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteNamespaceResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteNamespaceResponse : public QuickSightResponse {
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

} // namespace QuickSight
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMESPACERESPONSE_H
#define QTAWS_CREATENAMESPACERESPONSE_H

#include "quicksightresponse.h"
#include "createnamespacerequest.h"

namespace QtAws {
namespace QuickSight {

class CreateNamespaceResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateNamespaceResponse : public QuickSightResponse {
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

} // namespace QuickSight
} // namespace QtAws

#endif

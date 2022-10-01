// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSRESPONSE_H
#define QTAWS_LISTWORKFLOWSRESPONSE_H

#include "glueresponse.h"
#include "listworkflowsrequest.h"

namespace QtAws {
namespace Glue {

class ListWorkflowsResponsePrivate;

class QTAWSGLUE_EXPORT ListWorkflowsResponse : public GlueResponse {
    Q_OBJECT

public:
    ListWorkflowsResponse(const ListWorkflowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkflowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkflowsResponse)
    Q_DISABLE_COPY(ListWorkflowsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

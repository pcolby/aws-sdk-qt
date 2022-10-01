// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFLOWRESPONSE_H
#define QTAWS_UPDATEWORKFLOWRESPONSE_H

#include "glueresponse.h"
#include "updateworkflowrequest.h"

namespace QtAws {
namespace Glue {

class UpdateWorkflowResponsePrivate;

class QTAWSGLUE_EXPORT UpdateWorkflowResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateWorkflowResponse(const UpdateWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkflowResponse)
    Q_DISABLE_COPY(UpdateWorkflowResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

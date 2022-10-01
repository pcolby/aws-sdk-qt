// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFLOWRESPONSE_H
#define QTAWS_CREATEWORKFLOWRESPONSE_H

#include "glueresponse.h"
#include "createworkflowrequest.h"

namespace QtAws {
namespace Glue {

class CreateWorkflowResponsePrivate;

class QTAWSGLUE_EXPORT CreateWorkflowResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateWorkflowResponse(const CreateWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkflowResponse)
    Q_DISABLE_COPY(CreateWorkflowResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

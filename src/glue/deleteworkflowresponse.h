// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWRESPONSE_H
#define QTAWS_DELETEWORKFLOWRESPONSE_H

#include "glueresponse.h"
#include "deleteworkflowrequest.h"

namespace QtAws {
namespace Glue {

class DeleteWorkflowResponsePrivate;

class QTAWSGLUE_EXPORT DeleteWorkflowResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteWorkflowResponse(const DeleteWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkflowResponse)
    Q_DISABLE_COPY(DeleteWorkflowResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

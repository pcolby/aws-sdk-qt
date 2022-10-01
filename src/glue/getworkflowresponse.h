// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRESPONSE_H
#define QTAWS_GETWORKFLOWRESPONSE_H

#include "glueresponse.h"
#include "getworkflowrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowResponsePrivate;

class QTAWSGLUE_EXPORT GetWorkflowResponse : public GlueResponse {
    Q_OBJECT

public:
    GetWorkflowResponse(const GetWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowResponse)
    Q_DISABLE_COPY(GetWorkflowResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

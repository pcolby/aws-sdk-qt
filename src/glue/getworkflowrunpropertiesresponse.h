// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNPROPERTIESRESPONSE_H
#define QTAWS_GETWORKFLOWRUNPROPERTIESRESPONSE_H

#include "glueresponse.h"
#include "getworkflowrunpropertiesrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunPropertiesResponsePrivate;

class QTAWSGLUE_EXPORT GetWorkflowRunPropertiesResponse : public GlueResponse {
    Q_OBJECT

public:
    GetWorkflowRunPropertiesResponse(const GetWorkflowRunPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowRunPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowRunPropertiesResponse)
    Q_DISABLE_COPY(GetWorkflowRunPropertiesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

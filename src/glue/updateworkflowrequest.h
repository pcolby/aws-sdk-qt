// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFLOWREQUEST_H
#define QTAWS_UPDATEWORKFLOWREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateWorkflowRequestPrivate;

class QTAWSGLUE_EXPORT UpdateWorkflowRequest : public GlueRequest {

public:
    UpdateWorkflowRequest(const UpdateWorkflowRequest &other);
    UpdateWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFLOWREQUEST_H
#define QTAWS_CREATEWORKFLOWREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateWorkflowRequestPrivate;

class QTAWSGLUE_EXPORT CreateWorkflowRequest : public GlueRequest {

public:
    CreateWorkflowRequest(const CreateWorkflowRequest &other);
    CreateWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

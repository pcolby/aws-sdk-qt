// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWREQUEST_H
#define QTAWS_DELETEWORKFLOWREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteWorkflowRequestPrivate;

class QTAWSGLUE_EXPORT DeleteWorkflowRequest : public GlueRequest {

public:
    DeleteWorkflowRequest(const DeleteWorkflowRequest &other);
    DeleteWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWREQUEST_H
#define QTAWS_GETWORKFLOWREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRequestPrivate;

class QTAWSGLUE_EXPORT GetWorkflowRequest : public GlueRequest {

public:
    GetWorkflowRequest(const GetWorkflowRequest &other);
    GetWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNPROPERTIESREQUEST_H
#define QTAWS_GETWORKFLOWRUNPROPERTIESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunPropertiesRequestPrivate;

class QTAWSGLUE_EXPORT GetWorkflowRunPropertiesRequest : public GlueRequest {

public:
    GetWorkflowRunPropertiesRequest(const GetWorkflowRunPropertiesRequest &other);
    GetWorkflowRunPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowRunPropertiesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWORKFLOWRUNPROPERTIESREQUEST_H
#define QTAWS_PUTWORKFLOWRUNPROPERTIESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class PutWorkflowRunPropertiesRequestPrivate;

class QTAWSGLUE_EXPORT PutWorkflowRunPropertiesRequest : public GlueRequest {

public:
    PutWorkflowRunPropertiesRequest(const PutWorkflowRunPropertiesRequest &other);
    PutWorkflowRunPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutWorkflowRunPropertiesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

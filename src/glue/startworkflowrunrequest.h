// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWRUNREQUEST_H
#define QTAWS_STARTWORKFLOWRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartWorkflowRunRequestPrivate;

class QTAWSGLUE_EXPORT StartWorkflowRunRequest : public GlueRequest {

public:
    StartWorkflowRunRequest(const StartWorkflowRunRequest &other);
    StartWorkflowRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartWorkflowRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

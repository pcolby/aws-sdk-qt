// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEWORKFLOWRUNREQUEST_H
#define QTAWS_RESUMEWORKFLOWRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ResumeWorkflowRunRequestPrivate;

class QTAWSGLUE_EXPORT ResumeWorkflowRunRequest : public GlueRequest {

public:
    ResumeWorkflowRunRequest(const ResumeWorkflowRunRequest &other);
    ResumeWorkflowRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeWorkflowRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLEVALUATIONTASKRUNREQUEST_H
#define QTAWS_STARTMLEVALUATIONTASKRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartMLEvaluationTaskRunRequestPrivate;

class QTAWSGLUE_EXPORT StartMLEvaluationTaskRunRequest : public GlueRequest {

public:
    StartMLEvaluationTaskRunRequest(const StartMLEvaluationTaskRunRequest &other);
    StartMLEvaluationTaskRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMLEvaluationTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

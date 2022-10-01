// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKEXECUTIONREQUEST_H
#define QTAWS_STOPNOTEBOOKEXECUTIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class StopNotebookExecutionRequestPrivate;

class QTAWSEMR_EXPORT StopNotebookExecutionRequest : public EmrRequest {

public:
    StopNotebookExecutionRequest(const StopNotebookExecutionRequest &other);
    StopNotebookExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopNotebookExecutionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

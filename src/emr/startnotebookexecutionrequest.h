// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKEXECUTIONREQUEST_H
#define QTAWS_STARTNOTEBOOKEXECUTIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class StartNotebookExecutionRequestPrivate;

class QTAWSEMR_EXPORT StartNotebookExecutionRequest : public EmrRequest {

public:
    StartNotebookExecutionRequest(const StartNotebookExecutionRequest &other);
    StartNotebookExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNotebookExecutionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

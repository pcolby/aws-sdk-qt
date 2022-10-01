// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKEXECUTIONREQUEST_H
#define QTAWS_DESCRIBENOTEBOOKEXECUTIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DescribeNotebookExecutionRequestPrivate;

class QTAWSEMR_EXPORT DescribeNotebookExecutionRequest : public EmrRequest {

public:
    DescribeNotebookExecutionRequest(const DescribeNotebookExecutionRequest &other);
    DescribeNotebookExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotebookExecutionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

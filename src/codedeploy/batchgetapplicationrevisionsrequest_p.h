// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONREVISIONSREQUEST_P_H
#define QTAWS_BATCHGETAPPLICATIONREVISIONSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "batchgetapplicationrevisionsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationRevisionsRequest;

class BatchGetApplicationRevisionsRequestPrivate : public CodeDeployRequestPrivate {

public:
    BatchGetApplicationRevisionsRequestPrivate(const CodeDeployRequest::Action action,
                                   BatchGetApplicationRevisionsRequest * const q);
    BatchGetApplicationRevisionsRequestPrivate(const BatchGetApplicationRevisionsRequestPrivate &other,
                                   BatchGetApplicationRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetApplicationRevisionsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

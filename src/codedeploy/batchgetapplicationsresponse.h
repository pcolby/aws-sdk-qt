// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONSRESPONSE_H
#define QTAWS_BATCHGETAPPLICATIONSRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetapplicationsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetApplicationsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetApplicationsResponse(const BatchGetApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetApplicationsResponse)
    Q_DISABLE_COPY(BatchGetApplicationsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

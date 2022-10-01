// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONREVISIONSRESPONSE_H
#define QTAWS_BATCHGETAPPLICATIONREVISIONSRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetapplicationrevisionsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationRevisionsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetApplicationRevisionsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetApplicationRevisionsResponse(const BatchGetApplicationRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetApplicationRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetApplicationRevisionsResponse)
    Q_DISABLE_COPY(BatchGetApplicationRevisionsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

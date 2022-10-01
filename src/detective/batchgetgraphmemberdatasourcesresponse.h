// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETGRAPHMEMBERDATASOURCESRESPONSE_H
#define QTAWS_BATCHGETGRAPHMEMBERDATASOURCESRESPONSE_H

#include "detectiveresponse.h"
#include "batchgetgraphmemberdatasourcesrequest.h"

namespace QtAws {
namespace Detective {

class BatchGetGraphMemberDatasourcesResponsePrivate;

class QTAWSDETECTIVE_EXPORT BatchGetGraphMemberDatasourcesResponse : public DetectiveResponse {
    Q_OBJECT

public:
    BatchGetGraphMemberDatasourcesResponse(const BatchGetGraphMemberDatasourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetGraphMemberDatasourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetGraphMemberDatasourcesResponse)
    Q_DISABLE_COPY(BatchGetGraphMemberDatasourcesResponse)

};

} // namespace Detective
} // namespace QtAws

#endif

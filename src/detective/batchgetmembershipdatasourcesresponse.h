// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETMEMBERSHIPDATASOURCESRESPONSE_H
#define QTAWS_BATCHGETMEMBERSHIPDATASOURCESRESPONSE_H

#include "detectiveresponse.h"
#include "batchgetmembershipdatasourcesrequest.h"

namespace QtAws {
namespace Detective {

class BatchGetMembershipDatasourcesResponsePrivate;

class QTAWSDETECTIVE_EXPORT BatchGetMembershipDatasourcesResponse : public DetectiveResponse {
    Q_OBJECT

public:
    BatchGetMembershipDatasourcesResponse(const BatchGetMembershipDatasourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetMembershipDatasourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetMembershipDatasourcesResponse)
    Q_DISABLE_COPY(BatchGetMembershipDatasourcesResponse)

};

} // namespace Detective
} // namespace QtAws

#endif

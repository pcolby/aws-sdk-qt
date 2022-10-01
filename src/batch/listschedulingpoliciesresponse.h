// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULINGPOLICIESRESPONSE_H
#define QTAWS_LISTSCHEDULINGPOLICIESRESPONSE_H

#include "batchresponse.h"
#include "listschedulingpoliciesrequest.h"

namespace QtAws {
namespace Batch {

class ListSchedulingPoliciesResponsePrivate;

class QTAWSBATCH_EXPORT ListSchedulingPoliciesResponse : public BatchResponse {
    Q_OBJECT

public:
    ListSchedulingPoliciesResponse(const ListSchedulingPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSchedulingPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchedulingPoliciesResponse)
    Q_DISABLE_COPY(ListSchedulingPoliciesResponse)

};

} // namespace Batch
} // namespace QtAws

#endif

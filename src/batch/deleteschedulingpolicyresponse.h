// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULINGPOLICYRESPONSE_H
#define QTAWS_DELETESCHEDULINGPOLICYRESPONSE_H

#include "batchresponse.h"
#include "deleteschedulingpolicyrequest.h"

namespace QtAws {
namespace Batch {

class DeleteSchedulingPolicyResponsePrivate;

class QTAWSBATCH_EXPORT DeleteSchedulingPolicyResponse : public BatchResponse {
    Q_OBJECT

public:
    DeleteSchedulingPolicyResponse(const DeleteSchedulingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSchedulingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchedulingPolicyResponse)
    Q_DISABLE_COPY(DeleteSchedulingPolicyResponse)

};

} // namespace Batch
} // namespace QtAws

#endif

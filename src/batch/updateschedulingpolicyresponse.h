// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULINGPOLICYRESPONSE_H
#define QTAWS_UPDATESCHEDULINGPOLICYRESPONSE_H

#include "batchresponse.h"
#include "updateschedulingpolicyrequest.h"

namespace QtAws {
namespace Batch {

class UpdateSchedulingPolicyResponsePrivate;

class QTAWSBATCH_EXPORT UpdateSchedulingPolicyResponse : public BatchResponse {
    Q_OBJECT

public:
    UpdateSchedulingPolicyResponse(const UpdateSchedulingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSchedulingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSchedulingPolicyResponse)
    Q_DISABLE_COPY(UpdateSchedulingPolicyResponse)

};

} // namespace Batch
} // namespace QtAws

#endif

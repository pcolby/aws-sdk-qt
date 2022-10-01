// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULINGPOLICYRESPONSE_H
#define QTAWS_CREATESCHEDULINGPOLICYRESPONSE_H

#include "batchresponse.h"
#include "createschedulingpolicyrequest.h"

namespace QtAws {
namespace Batch {

class CreateSchedulingPolicyResponsePrivate;

class QTAWSBATCH_EXPORT CreateSchedulingPolicyResponse : public BatchResponse {
    Q_OBJECT

public:
    CreateSchedulingPolicyResponse(const CreateSchedulingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSchedulingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSchedulingPolicyResponse)
    Q_DISABLE_COPY(CreateSchedulingPolicyResponse)

};

} // namespace Batch
} // namespace QtAws

#endif

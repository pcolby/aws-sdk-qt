// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVEASSIGNMENTRESPONSE_H
#define QTAWS_APPROVEASSIGNMENTRESPONSE_H

#include "mturkresponse.h"
#include "approveassignmentrequest.h"

namespace QtAws {
namespace MTurk {

class ApproveAssignmentResponsePrivate;

class QTAWSMTURK_EXPORT ApproveAssignmentResponse : public MTurkResponse {
    Q_OBJECT

public:
    ApproveAssignmentResponse(const ApproveAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApproveAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApproveAssignmentResponse)
    Q_DISABLE_COPY(ApproveAssignmentResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

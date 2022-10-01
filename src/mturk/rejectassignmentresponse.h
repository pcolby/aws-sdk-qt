// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTASSIGNMENTRESPONSE_H
#define QTAWS_REJECTASSIGNMENTRESPONSE_H

#include "mturkresponse.h"
#include "rejectassignmentrequest.h"

namespace QtAws {
namespace MTurk {

class RejectAssignmentResponsePrivate;

class QTAWSMTURK_EXPORT RejectAssignmentResponse : public MTurkResponse {
    Q_OBJECT

public:
    RejectAssignmentResponse(const RejectAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectAssignmentResponse)
    Q_DISABLE_COPY(RejectAssignmentResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITREVIEWSTATUSRESPONSE_H
#define QTAWS_UPDATEHITREVIEWSTATUSRESPONSE_H

#include "mturkresponse.h"
#include "updatehitreviewstatusrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateHITReviewStatusResponsePrivate;

class QTAWSMTURK_EXPORT UpdateHITReviewStatusResponse : public MTurkResponse {
    Q_OBJECT

public:
    UpdateHITReviewStatusResponse(const UpdateHITReviewStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHITReviewStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHITReviewStatusResponse)
    Q_DISABLE_COPY(UpdateHITReviewStatusResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

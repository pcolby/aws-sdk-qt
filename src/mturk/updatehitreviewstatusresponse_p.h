// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITREVIEWSTATUSRESPONSE_P_H
#define QTAWS_UPDATEHITREVIEWSTATUSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class UpdateHITReviewStatusResponse;

class UpdateHITReviewStatusResponsePrivate : public MTurkResponsePrivate {

public:

    explicit UpdateHITReviewStatusResponsePrivate(UpdateHITReviewStatusResponse * const q);

    void parseUpdateHITReviewStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHITReviewStatusResponse)
    Q_DISABLE_COPY(UpdateHITReviewStatusResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

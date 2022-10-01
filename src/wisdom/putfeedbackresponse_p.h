// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKRESPONSE_P_H
#define QTAWS_PUTFEEDBACKRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class PutFeedbackResponse;

class PutFeedbackResponsePrivate : public WisdomResponsePrivate {

public:

    explicit PutFeedbackResponsePrivate(PutFeedbackResponse * const q);

    void parsePutFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFeedbackResponse)
    Q_DISABLE_COPY(PutFeedbackResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKRESPONSE_P_H
#define QTAWS_SUBMITFEEDBACKRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class SubmitFeedbackResponse;

class SubmitFeedbackResponsePrivate : public KendraResponsePrivate {

public:

    explicit SubmitFeedbackResponsePrivate(SubmitFeedbackResponse * const q);

    void parseSubmitFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubmitFeedbackResponse)
    Q_DISABLE_COPY(SubmitFeedbackResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif

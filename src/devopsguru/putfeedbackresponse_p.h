// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKRESPONSE_P_H
#define QTAWS_PUTFEEDBACKRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class PutFeedbackResponse;

class PutFeedbackResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit PutFeedbackResponsePrivate(PutFeedbackResponse * const q);

    void parsePutFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFeedbackResponse)
    Q_DISABLE_COPY(PutFeedbackResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

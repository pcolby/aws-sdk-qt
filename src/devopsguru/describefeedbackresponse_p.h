// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEEDBACKRESPONSE_P_H
#define QTAWS_DESCRIBEFEEDBACKRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeFeedbackResponse;

class DescribeFeedbackResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeFeedbackResponsePrivate(DescribeFeedbackResponse * const q);

    void parseDescribeFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFeedbackResponse)
    Q_DISABLE_COPY(DescribeFeedbackResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

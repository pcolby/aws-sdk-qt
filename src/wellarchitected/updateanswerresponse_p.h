// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANSWERRESPONSE_P_H
#define QTAWS_UPDATEANSWERRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpdateAnswerResponse;

class UpdateAnswerResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpdateAnswerResponsePrivate(UpdateAnswerResponse * const q);

    void parseUpdateAnswerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAnswerResponse)
    Q_DISABLE_COPY(UpdateAnswerResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

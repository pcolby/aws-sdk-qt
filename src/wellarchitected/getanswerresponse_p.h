// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANSWERRESPONSE_P_H
#define QTAWS_GETANSWERRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class GetAnswerResponse;

class GetAnswerResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit GetAnswerResponsePrivate(GetAnswerResponse * const q);

    void parseGetAnswerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnswerResponse)
    Q_DISABLE_COPY(GetAnswerResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

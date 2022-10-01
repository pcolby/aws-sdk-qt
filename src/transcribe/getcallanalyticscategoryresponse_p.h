// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSCATEGORYRESPONSE_P_H
#define QTAWS_GETCALLANALYTICSCATEGORYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsCategoryResponse;

class GetCallAnalyticsCategoryResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetCallAnalyticsCategoryResponsePrivate(GetCallAnalyticsCategoryResponse * const q);

    void parseGetCallAnalyticsCategoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(GetCallAnalyticsCategoryResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECALLANALYTICSCATEGORYRESPONSE_P_H
#define QTAWS_UPDATECALLANALYTICSCATEGORYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class UpdateCallAnalyticsCategoryResponse;

class UpdateCallAnalyticsCategoryResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit UpdateCallAnalyticsCategoryResponsePrivate(UpdateCallAnalyticsCategoryResponse * const q);

    void parseUpdateCallAnalyticsCategoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(UpdateCallAnalyticsCategoryResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif

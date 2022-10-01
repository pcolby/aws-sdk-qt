// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECALLANALYTICSCATEGORYRESPONSE_P_H
#define QTAWS_CREATECALLANALYTICSCATEGORYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class CreateCallAnalyticsCategoryResponse;

class CreateCallAnalyticsCategoryResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit CreateCallAnalyticsCategoryResponsePrivate(CreateCallAnalyticsCategoryResponse * const q);

    void parseCreateCallAnalyticsCategoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(CreateCallAnalyticsCategoryResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSCATEGORYRESPONSE_P_H
#define QTAWS_DELETECALLANALYTICSCATEGORYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsCategoryResponse;

class DeleteCallAnalyticsCategoryResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteCallAnalyticsCategoryResponsePrivate(DeleteCallAnalyticsCategoryResponse * const q);

    void parseDeleteCallAnalyticsCategoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(DeleteCallAnalyticsCategoryResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif

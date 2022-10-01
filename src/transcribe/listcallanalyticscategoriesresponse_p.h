// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSCATEGORIESRESPONSE_P_H
#define QTAWS_LISTCALLANALYTICSCATEGORIESRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsCategoriesResponse;

class ListCallAnalyticsCategoriesResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListCallAnalyticsCategoriesResponsePrivate(ListCallAnalyticsCategoriesResponse * const q);

    void parseListCallAnalyticsCategoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCallAnalyticsCategoriesResponse)
    Q_DISABLE_COPY(ListCallAnalyticsCategoriesResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif

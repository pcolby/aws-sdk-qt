// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDERRESPONSE_P_H
#define QTAWS_STARTRECOMMENDERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class StartRecommenderResponse;

class StartRecommenderResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit StartRecommenderResponsePrivate(StartRecommenderResponse * const q);

    void parseStartRecommenderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRecommenderResponse)
    Q_DISABLE_COPY(StartRecommenderResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

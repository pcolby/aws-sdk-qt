// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERRESPONSE_P_H
#define QTAWS_UPDATERECOMMENDERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class UpdateRecommenderResponse;

class UpdateRecommenderResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit UpdateRecommenderResponsePrivate(UpdateRecommenderResponse * const q);

    void parseUpdateRecommenderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecommenderResponse)
    Q_DISABLE_COPY(UpdateRecommenderResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERRESPONSE_P_H
#define QTAWS_CREATERECOMMENDERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateRecommenderResponse;

class CreateRecommenderResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateRecommenderResponsePrivate(CreateRecommenderResponse * const q);

    void parseCreateRecommenderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecommenderResponse)
    Q_DISABLE_COPY(CreateRecommenderResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

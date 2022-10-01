// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERRESPONSE_P_H
#define QTAWS_DELETERECOMMENDERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DeleteRecommenderResponse;

class DeleteRecommenderResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DeleteRecommenderResponsePrivate(DeleteRecommenderResponse * const q);

    void parseDeleteRecommenderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecommenderResponse)
    Q_DISABLE_COPY(DeleteRecommenderResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

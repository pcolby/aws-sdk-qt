// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPASSESSMENTSRESPONSE_P_H
#define QTAWS_LISTAPPASSESSMENTSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppAssessmentsResponse;

class ListAppAssessmentsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAppAssessmentsResponsePrivate(ListAppAssessmentsResponse * const q);

    void parseListAppAssessmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppAssessmentsResponse)
    Q_DISABLE_COPY(ListAppAssessmentsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

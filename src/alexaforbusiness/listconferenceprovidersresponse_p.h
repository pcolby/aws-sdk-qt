// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFERENCEPROVIDERSRESPONSE_P_H
#define QTAWS_LISTCONFERENCEPROVIDERSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListConferenceProvidersResponse;

class ListConferenceProvidersResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListConferenceProvidersResponsePrivate(ListConferenceProvidersResponse * const q);

    void parseListConferenceProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConferenceProvidersResponse)
    Q_DISABLE_COPY(ListConferenceProvidersResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

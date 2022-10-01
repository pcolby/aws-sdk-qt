// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPROVIDERRESPONSE_P_H
#define QTAWS_GETCONFERENCEPROVIDERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferenceProviderResponse;

class GetConferenceProviderResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetConferenceProviderResponsePrivate(GetConferenceProviderResponse * const q);

    void parseGetConferenceProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConferenceProviderResponse)
    Q_DISABLE_COPY(GetConferenceProviderResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFERENCEPROVIDERRESPONSE_P_H
#define QTAWS_CREATECONFERENCEPROVIDERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateConferenceProviderResponse;

class CreateConferenceProviderResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateConferenceProviderResponsePrivate(CreateConferenceProviderResponse * const q);

    void parseCreateConferenceProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConferenceProviderResponse)
    Q_DISABLE_COPY(CreateConferenceProviderResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

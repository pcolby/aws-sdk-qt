// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFERENCEPROVIDERRESPONSE_P_H
#define QTAWS_UPDATECONFERENCEPROVIDERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateConferenceProviderResponse;

class UpdateConferenceProviderResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateConferenceProviderResponsePrivate(UpdateConferenceProviderResponse * const q);

    void parseUpdateConferenceProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConferenceProviderResponse)
    Q_DISABLE_COPY(UpdateConferenceProviderResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

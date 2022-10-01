// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFERENCEPROVIDERRESPONSE_P_H
#define QTAWS_DELETECONFERENCEPROVIDERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteConferenceProviderResponse;

class DeleteConferenceProviderResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteConferenceProviderResponsePrivate(DeleteConferenceProviderResponse * const q);

    void parseDeleteConferenceProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConferenceProviderResponse)
    Q_DISABLE_COPY(DeleteConferenceProviderResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

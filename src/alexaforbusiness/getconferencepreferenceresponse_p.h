// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPREFERENCERESPONSE_P_H
#define QTAWS_GETCONFERENCEPREFERENCERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferencePreferenceResponse;

class GetConferencePreferenceResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetConferencePreferenceResponsePrivate(GetConferencePreferenceResponse * const q);

    void parseGetConferencePreferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConferencePreferenceResponse)
    Q_DISABLE_COPY(GetConferencePreferenceResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

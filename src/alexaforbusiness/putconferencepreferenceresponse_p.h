// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFERENCEPREFERENCERESPONSE_P_H
#define QTAWS_PUTCONFERENCEPREFERENCERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutConferencePreferenceResponse;

class PutConferencePreferenceResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit PutConferencePreferenceResponsePrivate(PutConferencePreferenceResponse * const q);

    void parsePutConferencePreferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConferencePreferenceResponse)
    Q_DISABLE_COPY(PutConferencePreferenceResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINRESPONSE_P_H
#define QTAWS_UPDATEDOMAINRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class UpdateDomainResponse;

class UpdateDomainResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit UpdateDomainResponsePrivate(UpdateDomainResponse * const q);

    void parseUpdateDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainResponse)
    Q_DISABLE_COPY(UpdateDomainResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif

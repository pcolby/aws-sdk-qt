// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNERINPUTRESPONSE_P_H
#define QTAWS_CREATEPARTNERINPUTRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class CreatePartnerInputResponse;

class CreatePartnerInputResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit CreatePartnerInputResponsePrivate(CreatePartnerInputResponse * const q);

    void parseCreatePartnerInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePartnerInputResponse)
    Q_DISABLE_COPY(CreatePartnerInputResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

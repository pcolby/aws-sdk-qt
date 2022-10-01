// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTTRACKERRESPONSE_P_H
#define QTAWS_CREATEEVENTTRACKERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateEventTrackerResponse;

class CreateEventTrackerResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateEventTrackerResponsePrivate(CreateEventTrackerResponse * const q);

    void parseCreateEventTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventTrackerResponse)
    Q_DISABLE_COPY(CreateEventTrackerResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTRACKERRESPONSE_P_H
#define QTAWS_DELETEEVENTTRACKERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DeleteEventTrackerResponse;

class DeleteEventTrackerResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DeleteEventTrackerResponsePrivate(DeleteEventTrackerResponse * const q);

    void parseDeleteEventTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventTrackerResponse)
    Q_DISABLE_COPY(DeleteEventTrackerResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

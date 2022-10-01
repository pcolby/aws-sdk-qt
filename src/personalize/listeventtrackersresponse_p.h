// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTRACKERSRESPONSE_P_H
#define QTAWS_LISTEVENTTRACKERSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListEventTrackersResponse;

class ListEventTrackersResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListEventTrackersResponsePrivate(ListEventTrackersResponse * const q);

    void parseListEventTrackersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventTrackersResponse)
    Q_DISABLE_COPY(ListEventTrackersResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

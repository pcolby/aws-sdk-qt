// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELEASELABELSRESPONSE_P_H
#define QTAWS_LISTRELEASELABELSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListReleaseLabelsResponse;

class ListReleaseLabelsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListReleaseLabelsResponsePrivate(ListReleaseLabelsResponse * const q);

    void parseListReleaseLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReleaseLabelsResponse)
    Q_DISABLE_COPY(ListReleaseLabelsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

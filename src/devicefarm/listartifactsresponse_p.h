// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARTIFACTSRESPONSE_P_H
#define QTAWS_LISTARTIFACTSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListArtifactsResponse;

class ListArtifactsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListArtifactsResponsePrivate(ListArtifactsResponse * const q);

    void parseListArtifactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListArtifactsResponse)
    Q_DISABLE_COPY(ListArtifactsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

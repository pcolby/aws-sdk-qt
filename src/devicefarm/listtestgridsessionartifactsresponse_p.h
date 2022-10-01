// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONARTIFACTSRESPONSE_P_H
#define QTAWS_LISTTESTGRIDSESSIONARTIFACTSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionArtifactsResponse;

class ListTestGridSessionArtifactsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListTestGridSessionArtifactsResponsePrivate(ListTestGridSessionArtifactsResponse * const q);

    void parseListTestGridSessionArtifactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTestGridSessionArtifactsResponse)
    Q_DISABLE_COPY(ListTestGridSessionArtifactsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

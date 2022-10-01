// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOSESSIONMAPPINGRESPONSE_P_H
#define QTAWS_GETSTUDIOSESSIONMAPPINGRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class GetStudioSessionMappingResponse;

class GetStudioSessionMappingResponsePrivate : public EmrResponsePrivate {

public:

    explicit GetStudioSessionMappingResponsePrivate(GetStudioSessionMappingResponse * const q);

    void parseGetStudioSessionMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStudioSessionMappingResponse)
    Q_DISABLE_COPY(GetStudioSessionMappingResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

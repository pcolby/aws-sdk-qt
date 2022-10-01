// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOSESSIONMAPPINGRESPONSE_P_H
#define QTAWS_UPDATESTUDIOSESSIONMAPPINGRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class UpdateStudioSessionMappingResponse;

class UpdateStudioSessionMappingResponsePrivate : public EmrResponsePrivate {

public:

    explicit UpdateStudioSessionMappingResponsePrivate(UpdateStudioSessionMappingResponse * const q);

    void parseUpdateStudioSessionMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStudioSessionMappingResponse)
    Q_DISABLE_COPY(UpdateStudioSessionMappingResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

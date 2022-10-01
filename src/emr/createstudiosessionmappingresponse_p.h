// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOSESSIONMAPPINGRESPONSE_P_H
#define QTAWS_CREATESTUDIOSESSIONMAPPINGRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class CreateStudioSessionMappingResponse;

class CreateStudioSessionMappingResponsePrivate : public EmrResponsePrivate {

public:

    explicit CreateStudioSessionMappingResponsePrivate(CreateStudioSessionMappingResponse * const q);

    void parseCreateStudioSessionMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStudioSessionMappingResponse)
    Q_DISABLE_COPY(CreateStudioSessionMappingResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

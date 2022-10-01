// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOSESSIONMAPPINGRESPONSE_P_H
#define QTAWS_DELETESTUDIOSESSIONMAPPINGRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DeleteStudioSessionMappingResponse;

class DeleteStudioSessionMappingResponsePrivate : public EmrResponsePrivate {

public:

    explicit DeleteStudioSessionMappingResponsePrivate(DeleteStudioSessionMappingResponse * const q);

    void parseDeleteStudioSessionMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStudioSessionMappingResponse)
    Q_DISABLE_COPY(DeleteStudioSessionMappingResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

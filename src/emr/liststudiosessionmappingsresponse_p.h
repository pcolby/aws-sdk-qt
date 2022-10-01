// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSESSIONMAPPINGSRESPONSE_P_H
#define QTAWS_LISTSTUDIOSESSIONMAPPINGSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListStudioSessionMappingsResponse;

class ListStudioSessionMappingsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListStudioSessionMappingsResponsePrivate(ListStudioSessionMappingsResponse * const q);

    void parseListStudioSessionMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStudioSessionMappingsResponse)
    Q_DISABLE_COPY(ListStudioSessionMappingsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

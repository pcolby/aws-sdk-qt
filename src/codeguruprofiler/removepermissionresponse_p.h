// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONRESPONSE_P_H
#define QTAWS_REMOVEPERMISSIONRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class RemovePermissionResponse;

class RemovePermissionResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit RemovePermissionResponsePrivate(RemovePermissionResponse * const q);

    void parseRemovePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemovePermissionResponse)
    Q_DISABLE_COPY(RemovePermissionResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif

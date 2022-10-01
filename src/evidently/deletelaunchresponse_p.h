// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHRESPONSE_P_H
#define QTAWS_DELETELAUNCHRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class DeleteLaunchResponse;

class DeleteLaunchResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit DeleteLaunchResponsePrivate(DeleteLaunchResponse * const q);

    void parseDeleteLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchResponse)
    Q_DISABLE_COPY(DeleteLaunchResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHFROMINDEXRESPONSE_P_H
#define QTAWS_DETACHFROMINDEXRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DetachFromIndexResponse;

class DetachFromIndexResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DetachFromIndexResponsePrivate(DetachFromIndexResponse * const q);

    void parseDetachFromIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachFromIndexResponse)
    Q_DISABLE_COPY(DetachFromIndexResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

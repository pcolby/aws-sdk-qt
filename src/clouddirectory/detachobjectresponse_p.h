// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHOBJECTRESPONSE_P_H
#define QTAWS_DETACHOBJECTRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DetachObjectResponse;

class DetachObjectResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DetachObjectResponsePrivate(DetachObjectResponse * const q);

    void parseDetachObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachObjectResponse)
    Q_DISABLE_COPY(DetachObjectResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

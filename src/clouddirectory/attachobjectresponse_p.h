// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHOBJECTRESPONSE_P_H
#define QTAWS_ATTACHOBJECTRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class AttachObjectResponse;

class AttachObjectResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit AttachObjectResponsePrivate(AttachObjectResponse * const q);

    void parseAttachObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachObjectResponse)
    Q_DISABLE_COPY(AttachObjectResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

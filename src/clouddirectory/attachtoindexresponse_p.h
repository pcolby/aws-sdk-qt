// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTOINDEXRESPONSE_P_H
#define QTAWS_ATTACHTOINDEXRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class AttachToIndexResponse;

class AttachToIndexResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit AttachToIndexResponsePrivate(AttachToIndexResponse * const q);

    void parseAttachToIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachToIndexResponse)
    Q_DISABLE_COPY(AttachToIndexResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

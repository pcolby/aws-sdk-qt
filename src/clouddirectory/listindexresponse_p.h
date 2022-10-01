// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDEXRESPONSE_P_H
#define QTAWS_LISTINDEXRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListIndexResponse;

class ListIndexResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListIndexResponsePrivate(ListIndexResponse * const q);

    void parseListIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIndexResponse)
    Q_DISABLE_COPY(ListIndexResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

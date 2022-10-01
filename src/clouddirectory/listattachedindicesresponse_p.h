// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDINDICESRESPONSE_P_H
#define QTAWS_LISTATTACHEDINDICESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListAttachedIndicesResponse;

class ListAttachedIndicesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListAttachedIndicesResponsePrivate(ListAttachedIndicesResponse * const q);

    void parseListAttachedIndicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttachedIndicesResponse)
    Q_DISABLE_COPY(ListAttachedIndicesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

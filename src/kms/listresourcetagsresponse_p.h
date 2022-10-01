// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETAGSRESPONSE_P_H
#define QTAWS_LISTRESOURCETAGSRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ListResourceTagsResponse;

class ListResourceTagsResponsePrivate : public KmsResponsePrivate {

public:

    explicit ListResourceTagsResponsePrivate(ListResourceTagsResponse * const q);

    void parseListResourceTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceTagsResponse)
    Q_DISABLE_COPY(ListResourceTagsResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

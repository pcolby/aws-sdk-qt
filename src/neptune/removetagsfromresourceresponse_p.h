// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMRESOURCERESPONSE_P_H
#define QTAWS_REMOVETAGSFROMRESOURCERESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class RemoveTagsFromResourceResponse;

class RemoveTagsFromResourceResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit RemoveTagsFromResourceResponsePrivate(RemoveTagsFromResourceResponse * const q);

    void parseRemoveTagsFromResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromResourceResponse)
    Q_DISABLE_COPY(RemoveTagsFromResourceResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif

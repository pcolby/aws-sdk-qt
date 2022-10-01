// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSRESPONSE_P_H
#define QTAWS_CREATETAGSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class CreateTagsResponse;

class CreateTagsResponsePrivate : public EfsResponsePrivate {

public:

    explicit CreateTagsResponsePrivate(CreateTagsResponse * const q);

    void parseCreateTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTagsResponse)
    Q_DISABLE_COPY(CreateTagsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif

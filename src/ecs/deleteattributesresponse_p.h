// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTESRESPONSE_P_H
#define QTAWS_DELETEATTRIBUTESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DeleteAttributesResponse;

class DeleteAttributesResponsePrivate : public EcsResponsePrivate {

public:

    explicit DeleteAttributesResponsePrivate(DeleteAttributesResponse * const q);

    void parseDeleteAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAttributesResponse)
    Q_DISABLE_COPY(DeleteAttributesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBLUEPRINTRESPONSE_P_H
#define QTAWS_DELETEBLUEPRINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteBlueprintResponse;

class DeleteBlueprintResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteBlueprintResponsePrivate(DeleteBlueprintResponse * const q);

    void parseDeleteBlueprintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBlueprintResponse)
    Q_DISABLE_COPY(DeleteBlueprintResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

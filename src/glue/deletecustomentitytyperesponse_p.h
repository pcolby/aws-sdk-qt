// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMENTITYTYPERESPONSE_P_H
#define QTAWS_DELETECUSTOMENTITYTYPERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteCustomEntityTypeResponse;

class DeleteCustomEntityTypeResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteCustomEntityTypeResponsePrivate(DeleteCustomEntityTypeResponse * const q);

    void parseDeleteCustomEntityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomEntityTypeResponse)
    Q_DISABLE_COPY(DeleteCustomEntityTypeResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

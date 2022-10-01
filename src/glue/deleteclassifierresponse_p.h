// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLASSIFIERRESPONSE_P_H
#define QTAWS_DELETECLASSIFIERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteClassifierResponse;

class DeleteClassifierResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteClassifierResponsePrivate(DeleteClassifierResponse * const q);

    void parseDeleteClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClassifierResponse)
    Q_DISABLE_COPY(DeleteClassifierResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

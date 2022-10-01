// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERRESPONSE_P_H
#define QTAWS_GETCLASSIFIERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetClassifierResponse;

class GetClassifierResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetClassifierResponsePrivate(GetClassifierResponse * const q);

    void parseGetClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClassifierResponse)
    Q_DISABLE_COPY(GetClassifierResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

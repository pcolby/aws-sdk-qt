// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMLTRANSFORMSRESPONSE_P_H
#define QTAWS_LISTMLTRANSFORMSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListMLTransformsResponse;

class ListMLTransformsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListMLTransformsResponsePrivate(ListMLTransformsResponse * const q);

    void parseListMLTransformsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMLTransformsResponse)
    Q_DISABLE_COPY(ListMLTransformsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

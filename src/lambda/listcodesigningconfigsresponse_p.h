// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODESIGNINGCONFIGSRESPONSE_P_H
#define QTAWS_LISTCODESIGNINGCONFIGSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListCodeSigningConfigsResponse;

class ListCodeSigningConfigsResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListCodeSigningConfigsResponsePrivate(ListCodeSigningConfigsResponse * const q);

    void parseListCodeSigningConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCodeSigningConfigsResponse)
    Q_DISABLE_COPY(ListCodeSigningConfigsResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif

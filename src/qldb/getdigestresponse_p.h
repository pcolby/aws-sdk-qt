// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIGESTRESPONSE_P_H
#define QTAWS_GETDIGESTRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class GetDigestResponse;

class GetDigestResponsePrivate : public QldbResponsePrivate {

public:

    explicit GetDigestResponsePrivate(GetDigestResponse * const q);

    void parseGetDigestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDigestResponse)
    Q_DISABLE_COPY(GetDigestResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEMETADATARESPONSE_P_H
#define QTAWS_GETTABLEMETADATARESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetTableMetadataResponse;

class GetTableMetadataResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetTableMetadataResponsePrivate(GetTableMetadataResponse * const q);

    void parseGetTableMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTableMetadataResponse)
    Q_DISABLE_COPY(GetTableMetadataResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif

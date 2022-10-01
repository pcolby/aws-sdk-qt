// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEMETADATARESPONSE_P_H
#define QTAWS_LISTTABLEMETADATARESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class ListTableMetadataResponse;

class ListTableMetadataResponsePrivate : public AthenaResponsePrivate {

public:

    explicit ListTableMetadataResponsePrivate(ListTableMetadataResponse * const q);

    void parseListTableMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTableMetadataResponse)
    Q_DISABLE_COPY(ListTableMetadataResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif

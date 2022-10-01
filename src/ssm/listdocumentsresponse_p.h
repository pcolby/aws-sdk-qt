// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTSRESPONSE_P_H
#define QTAWS_LISTDOCUMENTSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListDocumentsResponse;

class ListDocumentsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListDocumentsResponsePrivate(ListDocumentsResponse * const q);

    void parseListDocumentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDocumentsResponse)
    Q_DISABLE_COPY(ListDocumentsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

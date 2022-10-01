// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTASSOCIATIONVERSIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListAssociationVersionsResponse;

class ListAssociationVersionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListAssociationVersionsResponsePrivate(ListAssociationVersionsResponse * const q);

    void parseListAssociationVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociationVersionsResponse)
    Q_DISABLE_COPY(ListAssociationVersionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

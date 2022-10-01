// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTASSOCIATIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListAssociationsResponse;

class ListAssociationsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListAssociationsResponsePrivate(ListAssociationsResponse * const q);

    void parseListAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociationsResponse)
    Q_DISABLE_COPY(ListAssociationsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

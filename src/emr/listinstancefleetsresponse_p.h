// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEFLEETSRESPONSE_P_H
#define QTAWS_LISTINSTANCEFLEETSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListInstanceFleetsResponse;

class ListInstanceFleetsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListInstanceFleetsResponsePrivate(ListInstanceFleetsResponse * const q);

    void parseListInstanceFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceFleetsResponse)
    Q_DISABLE_COPY(ListInstanceFleetsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

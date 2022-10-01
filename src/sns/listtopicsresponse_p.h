// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSRESPONSE_P_H
#define QTAWS_LISTTOPICSRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListTopicsResponse;

class ListTopicsResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListTopicsResponsePrivate(ListTopicsResponse * const q);

    void parseListTopicsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTopicsResponse)
    Q_DISABLE_COPY(ListTopicsResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif

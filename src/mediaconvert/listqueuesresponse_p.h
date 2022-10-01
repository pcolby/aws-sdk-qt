// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESRESPONSE_P_H
#define QTAWS_LISTQUEUESRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class ListQueuesResponse;

class ListQueuesResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit ListQueuesResponsePrivate(ListQueuesResponse * const q);

    void parseListQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueuesResponse)
    Q_DISABLE_COPY(ListQueuesResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

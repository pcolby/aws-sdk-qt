// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERYSTREAMSRESPONSE_P_H
#define QTAWS_LISTDELIVERYSTREAMSRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class ListDeliveryStreamsResponse;

class ListDeliveryStreamsResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit ListDeliveryStreamsResponsePrivate(ListDeliveryStreamsResponse * const q);

    void parseListDeliveryStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeliveryStreamsResponse)
    Q_DISABLE_COPY(ListDeliveryStreamsResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif

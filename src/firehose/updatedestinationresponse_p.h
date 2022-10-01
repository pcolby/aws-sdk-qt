// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATEDESTINATIONRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class UpdateDestinationResponse;

class UpdateDestinationResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit UpdateDestinationResponsePrivate(UpdateDestinationResponse * const q);

    void parseUpdateDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDestinationResponse)
    Q_DISABLE_COPY(UpdateDestinationResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif

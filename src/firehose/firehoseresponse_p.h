// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FIREHOSERESPONSE_P_H
#define QTAWS_FIREHOSERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Firehose {

class FirehoseResponse;

class FirehoseResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit FirehoseResponsePrivate(FirehoseResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FirehoseResponse)
    Q_DISABLE_COPY(FirehoseResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOMEDIARESPONSE_P_H
#define QTAWS_KINESISVIDEOMEDIARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KinesisVideoMedia {

class KinesisVideoMediaResponse;

class KinesisVideoMediaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisVideoMediaResponsePrivate(KinesisVideoMediaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisVideoMediaResponse)
    Q_DISABLE_COPY(KinesisVideoMediaResponsePrivate)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif

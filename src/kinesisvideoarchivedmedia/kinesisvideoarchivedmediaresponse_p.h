// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIARESPONSE_P_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaResponse;

class KinesisVideoArchivedMediaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisVideoArchivedMediaResponsePrivate(KinesisVideoArchivedMediaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisVideoArchivedMediaResponse)
    Q_DISABLE_COPY(KinesisVideoArchivedMediaResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif

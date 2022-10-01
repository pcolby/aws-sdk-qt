// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_P_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationTaggingResponse;

class PutStorageLensConfigurationTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutStorageLensConfigurationTaggingResponsePrivate(PutStorageLensConfigurationTaggingResponse * const q);

    void parsePutStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutStorageLensConfigurationTaggingResponse)
    Q_DISABLE_COPY(PutStorageLensConfigurationTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

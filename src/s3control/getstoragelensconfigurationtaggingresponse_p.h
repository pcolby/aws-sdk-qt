// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_P_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationTaggingResponse;

class GetStorageLensConfigurationTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetStorageLensConfigurationTaggingResponsePrivate(GetStorageLensConfigurationTaggingResponse * const q);

    void parseGetStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStorageLensConfigurationTaggingResponse)
    Q_DISABLE_COPY(GetStorageLensConfigurationTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

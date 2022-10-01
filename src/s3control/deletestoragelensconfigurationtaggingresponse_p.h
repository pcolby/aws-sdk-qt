// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONTAGGINGRESPONSE_P_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationTaggingResponse;

class DeleteStorageLensConfigurationTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteStorageLensConfigurationTaggingResponsePrivate(DeleteStorageLensConfigurationTaggingResponse * const q);

    void parseDeleteStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStorageLensConfigurationTaggingResponse)
    Q_DISABLE_COPY(DeleteStorageLensConfigurationTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

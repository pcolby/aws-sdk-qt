// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationResponse;

class GetStorageLensConfigurationResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetStorageLensConfigurationResponsePrivate(GetStorageLensConfigurationResponse * const q);

    void parseGetStorageLensConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStorageLensConfigurationResponse)
    Q_DISABLE_COPY(GetStorageLensConfigurationResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

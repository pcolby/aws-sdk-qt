// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationResponse;

class PutStorageLensConfigurationResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutStorageLensConfigurationResponsePrivate(PutStorageLensConfigurationResponse * const q);

    void parsePutStorageLensConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutStorageLensConfigurationResponse)
    Q_DISABLE_COPY(PutStorageLensConfigurationResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

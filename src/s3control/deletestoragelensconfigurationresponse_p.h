// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationResponse;

class DeleteStorageLensConfigurationResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteStorageLensConfigurationResponsePrivate(DeleteStorageLensConfigurationResponse * const q);

    void parseDeleteStorageLensConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStorageLensConfigurationResponse)
    Q_DISABLE_COPY(DeleteStorageLensConfigurationResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

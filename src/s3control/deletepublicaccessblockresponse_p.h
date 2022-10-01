// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICACCESSBLOCKRESPONSE_P_H
#define QTAWS_DELETEPUBLICACCESSBLOCKRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeletePublicAccessBlockResponse;

class DeletePublicAccessBlockResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeletePublicAccessBlockResponsePrivate(DeletePublicAccessBlockResponse * const q);

    void parseDeletePublicAccessBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePublicAccessBlockResponse)
    Q_DISABLE_COPY(DeletePublicAccessBlockResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

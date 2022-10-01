// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTACLRESPONSE_P_H
#define QTAWS_PUTOBJECTACLRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutObjectAclResponse;

class PutObjectAclResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutObjectAclResponsePrivate(PutObjectAclResponse * const q);

    void parsePutObjectAclResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutObjectAclResponse)
    Q_DISABLE_COPY(PutObjectAclResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

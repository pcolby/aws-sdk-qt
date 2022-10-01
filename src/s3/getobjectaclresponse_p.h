// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTACLRESPONSE_P_H
#define QTAWS_GETOBJECTACLRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectAclResponse;

class GetObjectAclResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectAclResponsePrivate(GetObjectAclResponse * const q);

    void parseGetObjectAclResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectAclResponse)
    Q_DISABLE_COPY(GetObjectAclResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

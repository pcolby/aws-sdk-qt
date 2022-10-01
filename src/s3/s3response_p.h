// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3RESPONSE_P_H
#define QTAWS_S3RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace S3 {

class S3Response;

class S3ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit S3ResponsePrivate(S3Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(S3Response)
    Q_DISABLE_COPY(S3ResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

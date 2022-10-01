// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3OUTPOSTSRESPONSE_P_H
#define QTAWS_S3OUTPOSTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace S3Outposts {

class S3OutpostsResponse;

class S3OutpostsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit S3OutpostsResponsePrivate(S3OutpostsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(S3OutpostsResponse)
    Q_DISABLE_COPY(S3OutpostsResponsePrivate)

};

} // namespace S3Outposts
} // namespace QtAws

#endif

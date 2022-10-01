// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGERESPONSE_P_H
#define QTAWS_MEDIAPACKAGERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class MediaPackageResponse;

class MediaPackageResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaPackageResponsePrivate(MediaPackageResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaPackageResponse)
    Q_DISABLE_COPY(MediaPackageResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

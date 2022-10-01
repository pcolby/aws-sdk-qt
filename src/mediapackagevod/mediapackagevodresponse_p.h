// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEVODRESPONSE_P_H
#define QTAWS_MEDIAPACKAGEVODRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class MediaPackageVodResponse;

class MediaPackageVodResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaPackageVodResponsePrivate(MediaPackageVodResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaPackageVodResponse)
    Q_DISABLE_COPY(MediaPackageVodResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif

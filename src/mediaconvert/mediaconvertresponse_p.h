// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONVERTRESPONSE_P_H
#define QTAWS_MEDIACONVERTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class MediaConvertResponse;

class MediaConvertResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaConvertResponsePrivate(MediaConvertResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaConvertResponse)
    Q_DISABLE_COPY(MediaConvertResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

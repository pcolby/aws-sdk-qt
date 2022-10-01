// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMAGEBUILDERRESPONSE_P_H
#define QTAWS_IMAGEBUILDERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ImageBuilderResponse;

class ImageBuilderResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ImageBuilderResponsePrivate(ImageBuilderResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImageBuilderResponse)
    Q_DISABLE_COPY(ImageBuilderResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

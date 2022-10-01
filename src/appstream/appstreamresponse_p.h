// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSTREAMRESPONSE_P_H
#define QTAWS_APPSTREAMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AppStream {

class AppStreamResponse;

class AppStreamResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppStreamResponsePrivate(AppStreamResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppStreamResponse)
    Q_DISABLE_COPY(AppStreamResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif

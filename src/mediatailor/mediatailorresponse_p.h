// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIATAILORRESPONSE_P_H
#define QTAWS_MEDIATAILORRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class MediaTailorResponse;

class MediaTailorResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaTailorResponsePrivate(MediaTailorResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaTailorResponse)
    Q_DISABLE_COPY(MediaTailorResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

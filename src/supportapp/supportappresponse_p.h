// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTAPPRESPONSE_P_H
#define QTAWS_SUPPORTAPPRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SupportApp {

class SupportAppResponse;

class SupportAppResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SupportAppResponsePrivate(SupportAppResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SupportAppResponse)
    Q_DISABLE_COPY(SupportAppResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif

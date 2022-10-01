// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTRESPONSE_P_H
#define QTAWS_SUPPORTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Support {

class SupportResponse;

class SupportResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SupportResponsePrivate(SupportResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SupportResponse)
    Q_DISABLE_COPY(SupportResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif

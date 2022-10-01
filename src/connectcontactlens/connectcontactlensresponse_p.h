// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCONTACTLENSRESPONSE_P_H
#define QTAWS_CONNECTCONTACTLENSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensResponse;

class ConnectContactLensResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ConnectContactLensResponsePrivate(ConnectContactLensResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConnectContactLensResponse)
    Q_DISABLE_COPY(ConnectContactLensResponsePrivate)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif

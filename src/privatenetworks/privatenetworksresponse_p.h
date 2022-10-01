// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRIVATENETWORKSRESPONSE_P_H
#define QTAWS_PRIVATENETWORKSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class PrivateNetworksResponse;

class PrivateNetworksResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PrivateNetworksResponsePrivate(PrivateNetworksResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PrivateNetworksResponse)
    Q_DISABLE_COPY(PrivateNetworksResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif

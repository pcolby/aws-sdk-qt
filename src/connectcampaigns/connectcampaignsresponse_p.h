// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCAMPAIGNSRESPONSE_P_H
#define QTAWS_CONNECTCAMPAIGNSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class ConnectCampaignsResponse;

class ConnectCampaignsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ConnectCampaignsResponsePrivate(ConnectCampaignsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConnectCampaignsResponse)
    Q_DISABLE_COPY(ConnectCampaignsResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif

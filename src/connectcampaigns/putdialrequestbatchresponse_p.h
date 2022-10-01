// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDIALREQUESTBATCHRESPONSE_P_H
#define QTAWS_PUTDIALREQUESTBATCHRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class PutDialRequestBatchResponse;

class PutDialRequestBatchResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit PutDialRequestBatchResponsePrivate(PutDialRequestBatchResponse * const q);

    void parsePutDialRequestBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDialRequestBatchResponse)
    Q_DISABLE_COPY(PutDialRequestBatchResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif

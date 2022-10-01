// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNRESPONSE_H
#define QTAWS_UPDATECAMPAIGNRESPONSE_H

#include "personalizeresponse.h"
#include "updatecampaignrequest.h"

namespace QtAws {
namespace Personalize {

class UpdateCampaignResponsePrivate;

class QTAWSPERSONALIZE_EXPORT UpdateCampaignResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    UpdateCampaignResponse(const UpdateCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignResponse)
    Q_DISABLE_COPY(UpdateCampaignResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif

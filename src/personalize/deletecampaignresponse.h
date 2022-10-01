// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAMPAIGNRESPONSE_H
#define QTAWS_DELETECAMPAIGNRESPONSE_H

#include "personalizeresponse.h"
#include "deletecampaignrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteCampaignResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DeleteCampaignResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DeleteCampaignResponse(const DeleteCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCampaignResponse)
    Q_DISABLE_COPY(DeleteCampaignResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif

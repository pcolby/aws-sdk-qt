// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESPOTDATAFEEDSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATESPOTDATAFEEDSUBSCRIPTIONRESPONSE_H

#include "ec2response.h"
#include "createspotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSpotDatafeedSubscriptionResponsePrivate;

class QTAWSEC2_EXPORT CreateSpotDatafeedSubscriptionResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateSpotDatafeedSubscriptionResponse(const CreateSpotDatafeedSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSpotDatafeedSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSpotDatafeedSubscriptionResponse)
    Q_DISABLE_COPY(CreateSpotDatafeedSubscriptionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONRESPONSE_H

#include "ec2response.h"
#include "deletespotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSpotDatafeedSubscriptionResponsePrivate;

class QTAWSEC2_EXPORT DeleteSpotDatafeedSubscriptionResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteSpotDatafeedSubscriptionResponse(const DeleteSpotDatafeedSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSpotDatafeedSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSpotDatafeedSubscriptionResponse)
    Q_DISABLE_COPY(DeleteSpotDatafeedSubscriptionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

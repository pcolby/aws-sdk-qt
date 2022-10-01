// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTFLEETRESPONSE_H
#define QTAWS_REQUESTSPOTFLEETRESPONSE_H

#include "ec2response.h"
#include "requestspotfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotFleetResponsePrivate;

class QTAWSEC2_EXPORT RequestSpotFleetResponse : public Ec2Response {
    Q_OBJECT

public:
    RequestSpotFleetResponse(const RequestSpotFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestSpotFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestSpotFleetResponse)
    Q_DISABLE_COPY(RequestSpotFleetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

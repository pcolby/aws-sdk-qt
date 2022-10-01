// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTDATADELIVERYRESPONSE_H
#define QTAWS_UPDATEPROJECTDATADELIVERYRESPONSE_H

#include "evidentlyresponse.h"
#include "updateprojectdatadeliveryrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateProjectDataDeliveryResponsePrivate;

class QTAWSEVIDENTLY_EXPORT UpdateProjectDataDeliveryResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    UpdateProjectDataDeliveryResponse(const UpdateProjectDataDeliveryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProjectDataDeliveryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectDataDeliveryResponse)
    Q_DISABLE_COPY(UpdateProjectDataDeliveryResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif

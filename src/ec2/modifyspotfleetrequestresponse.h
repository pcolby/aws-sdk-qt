// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSPOTFLEETREQUESTRESPONSE_H
#define QTAWS_MODIFYSPOTFLEETREQUESTRESPONSE_H

#include "ec2response.h"
#include "modifyspotfleetrequestrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySpotFleetRequestResponsePrivate;

class QTAWSEC2_EXPORT ModifySpotFleetRequestResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifySpotFleetRequestResponse(const ModifySpotFleetRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySpotFleetRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySpotFleetRequestResponse)
    Q_DISABLE_COPY(ModifySpotFleetRequestResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

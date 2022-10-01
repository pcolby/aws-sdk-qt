// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONRESPONSE_H
#define QTAWS_UPDATEDISTRIBUTIONRESPONSE_H

#include "lightsailresponse.h"
#include "updatedistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateDistributionResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateDistributionResponse(const UpdateDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionResponse)
    Q_DISABLE_COPY(UpdateDistributionResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

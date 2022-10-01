// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONRESPONSE_H
#define QTAWS_DELETEDISTRIBUTIONRESPONSE_H

#include "lightsailresponse.h"
#include "deletedistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDistributionResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteDistributionResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteDistributionResponse(const DeleteDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDistributionResponse)
    Q_DISABLE_COPY(DeleteDistributionResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

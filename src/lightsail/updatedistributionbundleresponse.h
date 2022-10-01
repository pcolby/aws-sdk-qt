// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONBUNDLERESPONSE_H
#define QTAWS_UPDATEDISTRIBUTIONBUNDLERESPONSE_H

#include "lightsailresponse.h"
#include "updatedistributionbundlerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionBundleResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateDistributionBundleResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateDistributionBundleResponse(const UpdateDistributionBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDistributionBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionBundleResponse)
    Q_DISABLE_COPY(UpdateDistributionBundleResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

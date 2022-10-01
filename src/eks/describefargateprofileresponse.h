// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFARGATEPROFILERESPONSE_H
#define QTAWS_DESCRIBEFARGATEPROFILERESPONSE_H

#include "eksresponse.h"
#include "describefargateprofilerequest.h"

namespace QtAws {
namespace Eks {

class DescribeFargateProfileResponsePrivate;

class QTAWSEKS_EXPORT DescribeFargateProfileResponse : public EksResponse {
    Q_OBJECT

public:
    DescribeFargateProfileResponse(const DescribeFargateProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFargateProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFargateProfileResponse)
    Q_DISABLE_COPY(DescribeFargateProfileResponse)

};

} // namespace Eks
} // namespace QtAws

#endif

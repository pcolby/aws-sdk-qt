// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMYUSERPROFILERESPONSE_H
#define QTAWS_DESCRIBEMYUSERPROFILERESPONSE_H

#include "opsworksresponse.h"
#include "describemyuserprofilerequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeMyUserProfileResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeMyUserProfileResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeMyUserProfileResponse(const DescribeMyUserProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMyUserProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMyUserProfileResponse)
    Q_DISABLE_COPY(DescribeMyUserProfileResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

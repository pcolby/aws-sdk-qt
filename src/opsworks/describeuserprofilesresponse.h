// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILESRESPONSE_H
#define QTAWS_DESCRIBEUSERPROFILESRESPONSE_H

#include "opsworksresponse.h"
#include "describeuserprofilesrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeUserProfilesResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeUserProfilesResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeUserProfilesResponse(const DescribeUserProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserProfilesResponse)
    Q_DISABLE_COPY(DescribeUserProfilesResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

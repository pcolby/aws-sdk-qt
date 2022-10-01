// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILERESPONSE_H
#define QTAWS_DESCRIBEUSERPROFILERESPONSE_H

#include "sagemakerresponse.h"
#include "describeuserprofilerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeUserProfileResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeUserProfileResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeUserProfileResponse(const DescribeUserProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserProfileResponse)
    Q_DISABLE_COPY(DescribeUserProfileResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

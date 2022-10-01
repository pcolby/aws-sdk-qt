// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERRESPONSE_H
#define QTAWS_DESCRIBEUSERRESPONSE_H

#include "quicksightresponse.h"
#include "describeuserrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeUserResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeUserResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeUserResponse(const DescribeUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserResponse)
    Q_DISABLE_COPY(DescribeUserResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif

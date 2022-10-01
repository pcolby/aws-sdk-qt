// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLETASKSRESPONSE_H
#define QTAWS_DESCRIBEBUNDLETASKSRESPONSE_H

#include "ec2response.h"
#include "describebundletasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeBundleTasksResponsePrivate;

class QTAWSEC2_EXPORT DescribeBundleTasksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeBundleTasksResponse(const DescribeBundleTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBundleTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBundleTasksResponse)
    Q_DISABLE_COPY(DescribeBundleTasksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

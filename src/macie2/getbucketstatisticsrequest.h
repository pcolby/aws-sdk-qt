// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSTATISTICSREQUEST_H
#define QTAWS_GETBUCKETSTATISTICSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetBucketStatisticsRequestPrivate;

class QTAWSMACIE2_EXPORT GetBucketStatisticsRequest : public Macie2Request {

public:
    GetBucketStatisticsRequest(const GetBucketStatisticsRequest &other);
    GetBucketStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketStatisticsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

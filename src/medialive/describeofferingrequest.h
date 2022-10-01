// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOFFERINGREQUEST_H
#define QTAWS_DESCRIBEOFFERINGREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeOfferingRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeOfferingRequest : public MediaLiveRequest {

public:
    DescribeOfferingRequest(const DescribeOfferingRequest &other);
    DescribeOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOfferingRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEREQUEST_H
#define QTAWS_DESCRIBESCHEDULEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeScheduleRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeScheduleRequest : public MediaLiveRequest {

public:
    DescribeScheduleRequest(const DescribeScheduleRequest &other);
    DescribeScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduleRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

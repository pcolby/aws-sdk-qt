// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTREQUEST_H
#define QTAWS_DESCRIBEINPUTREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputRequest : public MediaLiveRequest {

public:
    DescribeInputRequest(const DescribeInputRequest &other);
    DescribeInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

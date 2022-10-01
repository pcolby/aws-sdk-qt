// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDREQUEST_H
#define QTAWS_DESCRIBEWORLDREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeWorldRequest : public RoboMakerRequest {

public:
    DescribeWorldRequest(const DescribeWorldRequest &other);
    DescribeWorldRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorldRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

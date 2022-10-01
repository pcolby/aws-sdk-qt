// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDTEMPLATEREQUEST_H
#define QTAWS_DESCRIBEWORLDTEMPLATEREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldTemplateRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeWorldTemplateRequest : public RoboMakerRequest {

public:
    DescribeWorldTemplateRequest(const DescribeWorldTemplateRequest &other);
    DescribeWorldTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

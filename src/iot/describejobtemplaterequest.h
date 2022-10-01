// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBTEMPLATEREQUEST_H
#define QTAWS_DESCRIBEJOBTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeJobTemplateRequestPrivate;

class QTAWSIOT_EXPORT DescribeJobTemplateRequest : public IoTRequest {

public:
    DescribeJobTemplateRequest(const DescribeJobTemplateRequest &other);
    DescribeJobTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

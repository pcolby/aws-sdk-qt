// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMITIGATIONACTIONREQUEST_H
#define QTAWS_DESCRIBEMITIGATIONACTIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeMitigationActionRequestPrivate;

class QTAWSIOT_EXPORT DescribeMitigationActionRequest : public IoTRequest {

public:
    DescribeMitigationActionRequest(const DescribeMitigationActionRequest &other);
    DescribeMitigationActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

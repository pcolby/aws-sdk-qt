// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEAUTHORIZERREQUEST_H
#define QTAWS_TESTINVOKEAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class TestInvokeAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT TestInvokeAuthorizerRequest : public IoTRequest {

public:
    TestInvokeAuthorizerRequest(const TestInvokeAuthorizerRequest &other);
    TestInvokeAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestInvokeAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

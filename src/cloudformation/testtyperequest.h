// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTTYPEREQUEST_H
#define QTAWS_TESTTYPEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class TestTypeRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT TestTypeRequest : public CloudFormationRequest {

public:
    TestTypeRequest(const TestTypeRequest &other);
    TestTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

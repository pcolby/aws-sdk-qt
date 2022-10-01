// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCUSTOMDATAIDENTIFIERREQUEST_H
#define QTAWS_TESTCUSTOMDATAIDENTIFIERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class TestCustomDataIdentifierRequestPrivate;

class QTAWSMACIE2_EXPORT TestCustomDataIdentifierRequest : public Macie2Request {

public:
    TestCustomDataIdentifierRequest(const TestCustomDataIdentifierRequest &other);
    TestCustomDataIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTALARMREQUEST_H
#define QTAWS_TESTALARMREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class TestAlarmRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT TestAlarmRequest : public LightsailRequest {

public:
    TestAlarmRequest(const TestAlarmRequest &other);
    TestAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestAlarmRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTALARMRESPONSE_H
#define QTAWS_TESTALARMRESPONSE_H

#include "lightsailresponse.h"
#include "testalarmrequest.h"

namespace QtAws {
namespace Lightsail {

class TestAlarmResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT TestAlarmResponse : public LightsailResponse {
    Q_OBJECT

public:
    TestAlarmResponse(const TestAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestAlarmResponse)
    Q_DISABLE_COPY(TestAlarmResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

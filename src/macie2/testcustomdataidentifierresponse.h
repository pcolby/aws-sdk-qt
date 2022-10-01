// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCUSTOMDATAIDENTIFIERRESPONSE_H
#define QTAWS_TESTCUSTOMDATAIDENTIFIERRESPONSE_H

#include "macie2response.h"
#include "testcustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class TestCustomDataIdentifierResponsePrivate;

class QTAWSMACIE2_EXPORT TestCustomDataIdentifierResponse : public Macie2Response {
    Q_OBJECT

public:
    TestCustomDataIdentifierResponse(const TestCustomDataIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestCustomDataIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestCustomDataIdentifierResponse)
    Q_DISABLE_COPY(TestCustomDataIdentifierResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

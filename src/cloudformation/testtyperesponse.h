// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTTYPERESPONSE_H
#define QTAWS_TESTTYPERESPONSE_H

#include "cloudformationresponse.h"
#include "testtyperequest.h"

namespace QtAws {
namespace CloudFormation {

class TestTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT TestTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    TestTypeResponse(const TestTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestTypeResponse)
    Q_DISABLE_COPY(TestTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

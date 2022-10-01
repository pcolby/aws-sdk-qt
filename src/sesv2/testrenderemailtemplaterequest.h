// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDEREMAILTEMPLATEREQUEST_H
#define QTAWS_TESTRENDEREMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class TestRenderEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT TestRenderEmailTemplateRequest : public SESv2Request {

public:
    TestRenderEmailTemplateRequest(const TestRenderEmailTemplateRequest &other);
    TestRenderEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestRenderEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

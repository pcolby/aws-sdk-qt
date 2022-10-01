// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDEREMAILTEMPLATEREQUEST_P_H
#define QTAWS_TESTRENDEREMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "testrenderemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class TestRenderEmailTemplateRequest;

class TestRenderEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    TestRenderEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   TestRenderEmailTemplateRequest * const q);
    TestRenderEmailTemplateRequestPrivate(const TestRenderEmailTemplateRequestPrivate &other,
                                   TestRenderEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestRenderEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

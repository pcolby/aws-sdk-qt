// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDERTEMPLATEREQUEST_P_H
#define QTAWS_TESTRENDERTEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "testrendertemplaterequest.h"

namespace QtAws {
namespace Ses {

class TestRenderTemplateRequest;

class TestRenderTemplateRequestPrivate : public SesRequestPrivate {

public:
    TestRenderTemplateRequestPrivate(const SesRequest::Action action,
                                   TestRenderTemplateRequest * const q);
    TestRenderTemplateRequestPrivate(const TestRenderTemplateRequestPrivate &other,
                                   TestRenderTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestRenderTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

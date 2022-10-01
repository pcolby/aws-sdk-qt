// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDERTEMPLATEREQUEST_H
#define QTAWS_TESTRENDERTEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class TestRenderTemplateRequestPrivate;

class QTAWSSES_EXPORT TestRenderTemplateRequest : public SesRequest {

public:
    TestRenderTemplateRequest(const TestRenderTemplateRequest &other);
    TestRenderTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestRenderTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

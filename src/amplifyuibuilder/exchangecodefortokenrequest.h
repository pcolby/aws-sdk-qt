// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXCHANGECODEFORTOKENREQUEST_H
#define QTAWS_EXCHANGECODEFORTOKENREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExchangeCodeForTokenRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExchangeCodeForTokenRequest : public AmplifyUIBuilderRequest {

public:
    ExchangeCodeForTokenRequest(const ExchangeCodeForTokenRequest &other);
    ExchangeCodeForTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExchangeCodeForTokenRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif

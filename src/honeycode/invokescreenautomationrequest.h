// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKESCREENAUTOMATIONREQUEST_H
#define QTAWS_INVOKESCREENAUTOMATIONREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class InvokeScreenAutomationRequestPrivate;

class QTAWSHONEYCODE_EXPORT InvokeScreenAutomationRequest : public HoneycodeRequest {

public:
    InvokeScreenAutomationRequest(const InvokeScreenAutomationRequest &other);
    InvokeScreenAutomationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeScreenAutomationRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif

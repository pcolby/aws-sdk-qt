// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKESCREENAUTOMATIONRESPONSE_H
#define QTAWS_INVOKESCREENAUTOMATIONRESPONSE_H

#include "honeycoderesponse.h"
#include "invokescreenautomationrequest.h"

namespace QtAws {
namespace Honeycode {

class InvokeScreenAutomationResponsePrivate;

class QTAWSHONEYCODE_EXPORT InvokeScreenAutomationResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    InvokeScreenAutomationResponse(const InvokeScreenAutomationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvokeScreenAutomationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeScreenAutomationResponse)
    Q_DISABLE_COPY(InvokeScreenAutomationResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif

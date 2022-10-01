// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRECEIPTRULEPOSITIONREQUEST_H
#define QTAWS_SETRECEIPTRULEPOSITIONREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetReceiptRulePositionRequestPrivate;

class QTAWSSES_EXPORT SetReceiptRulePositionRequest : public SesRequest {

public:
    SetReceiptRulePositionRequest(const SetReceiptRulePositionRequest &other);
    SetReceiptRulePositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetReceiptRulePositionRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

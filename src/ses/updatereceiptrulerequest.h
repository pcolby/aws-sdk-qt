// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECEIPTRULEREQUEST_H
#define QTAWS_UPDATERECEIPTRULEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class UpdateReceiptRuleRequestPrivate;

class QTAWSSES_EXPORT UpdateReceiptRuleRequest : public SesRequest {

public:
    UpdateReceiptRuleRequest(const UpdateReceiptRuleRequest &other);
    UpdateReceiptRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

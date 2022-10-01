// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULESETREQUEST_H
#define QTAWS_CREATERECEIPTRULESETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleSetRequestPrivate;

class QTAWSSES_EXPORT CreateReceiptRuleSetRequest : public SesRequest {

public:
    CreateReceiptRuleSetRequest(const CreateReceiptRuleSetRequest &other);
    CreateReceiptRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

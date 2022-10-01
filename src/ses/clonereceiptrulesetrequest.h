// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONERECEIPTRULESETREQUEST_H
#define QTAWS_CLONERECEIPTRULESETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CloneReceiptRuleSetRequestPrivate;

class QTAWSSES_EXPORT CloneReceiptRuleSetRequest : public SesRequest {

public:
    CloneReceiptRuleSetRequest(const CloneReceiptRuleSetRequest &other);
    CloneReceiptRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloneReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

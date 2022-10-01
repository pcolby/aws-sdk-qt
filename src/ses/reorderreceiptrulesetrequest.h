// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REORDERRECEIPTRULESETREQUEST_H
#define QTAWS_REORDERRECEIPTRULESETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class ReorderReceiptRuleSetRequestPrivate;

class QTAWSSES_EXPORT ReorderReceiptRuleSetRequest : public SesRequest {

public:
    ReorderReceiptRuleSetRequest(const ReorderReceiptRuleSetRequest &other);
    ReorderReceiptRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReorderReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

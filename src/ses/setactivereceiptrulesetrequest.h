// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETACTIVERECEIPTRULESETREQUEST_H
#define QTAWS_SETACTIVERECEIPTRULESETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetActiveReceiptRuleSetRequestPrivate;

class QTAWSSES_EXPORT SetActiveReceiptRuleSetRequest : public SesRequest {

public:
    SetActiveReceiptRuleSetRequest(const SetActiveReceiptRuleSetRequest &other);
    SetActiveReceiptRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetActiveReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

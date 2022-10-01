// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULESETREQUEST_H
#define QTAWS_DELETERECEIPTRULESETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleSetRequestPrivate;

class QTAWSSES_EXPORT DeleteReceiptRuleSetRequest : public SesRequest {

public:
    DeleteReceiptRuleSetRequest(const DeleteReceiptRuleSetRequest &other);
    DeleteReceiptRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

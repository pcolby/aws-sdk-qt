// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULEREQUEST_H
#define QTAWS_DELETERECEIPTRULEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleRequestPrivate;

class QTAWSSES_EXPORT DeleteReceiptRuleRequest : public SesRequest {

public:
    DeleteReceiptRuleRequest(const DeleteReceiptRuleRequest &other);
    DeleteReceiptRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

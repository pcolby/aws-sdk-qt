// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTFILTERREQUEST_H
#define QTAWS_CREATERECEIPTFILTERREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptFilterRequestPrivate;

class QTAWSSES_EXPORT CreateReceiptFilterRequest : public SesRequest {

public:
    CreateReceiptFilterRequest(const CreateReceiptFilterRequest &other);
    CreateReceiptFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReceiptFilterRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

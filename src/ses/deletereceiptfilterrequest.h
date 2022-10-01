// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTFILTERREQUEST_H
#define QTAWS_DELETERECEIPTFILTERREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptFilterRequestPrivate;

class QTAWSSES_EXPORT DeleteReceiptFilterRequest : public SesRequest {

public:
    DeleteReceiptFilterRequest(const DeleteReceiptFilterRequest &other);
    DeleteReceiptFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReceiptFilterRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

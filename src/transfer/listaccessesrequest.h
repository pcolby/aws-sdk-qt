// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSESREQUEST_H
#define QTAWS_LISTACCESSESREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListAccessesRequestPrivate;

class QTAWSTRANSFER_EXPORT ListAccessesRequest : public TransferRequest {

public:
    ListAccessesRequest(const ListAccessesRequest &other);
    ListAccessesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessesRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

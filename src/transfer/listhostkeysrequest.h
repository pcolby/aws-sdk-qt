// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTKEYSREQUEST_H
#define QTAWS_LISTHOSTKEYSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListHostKeysRequestPrivate;

class QTAWSTRANSFER_EXPORT ListHostKeysRequest : public TransferRequest {

public:
    ListHostKeysRequest(const ListHostKeysRequest &other);
    ListHostKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostKeysRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERSREQUEST_H
#define QTAWS_LISTSERVERSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListServersRequestPrivate;

class QTAWSTRANSFER_EXPORT ListServersRequest : public TransferRequest {

public:
    ListServersRequest(const ListServersRequest &other);
    ListServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServersRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

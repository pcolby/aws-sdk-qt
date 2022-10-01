// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIBLESOURCESERVERSREQUEST_H
#define QTAWS_LISTEXTENSIBLESOURCESERVERSREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class ListExtensibleSourceServersRequestPrivate;

class QTAWSDRS_EXPORT ListExtensibleSourceServersRequest : public DrsRequest {

public:
    ListExtensibleSourceServersRequest(const ListExtensibleSourceServersRequest &other);
    ListExtensibleSourceServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensibleSourceServersRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

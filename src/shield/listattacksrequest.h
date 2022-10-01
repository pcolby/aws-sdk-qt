// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACKSREQUEST_H
#define QTAWS_LISTATTACKSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class ListAttacksRequestPrivate;

class QTAWSSHIELD_EXPORT ListAttacksRequest : public ShieldRequest {

public:
    ListAttacksRequest(const ListAttacksRequest &other);
    ListAttacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttacksRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

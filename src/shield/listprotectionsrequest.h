// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONSREQUEST_H
#define QTAWS_LISTPROTECTIONSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class ListProtectionsRequestPrivate;

class QTAWSSHIELD_EXPORT ListProtectionsRequest : public ShieldRequest {

public:
    ListProtectionsRequest(const ListProtectionsRequest &other);
    ListProtectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtectionsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

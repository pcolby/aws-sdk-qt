// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSREQUEST_H
#define QTAWS_LISTPRINCIPALSREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class ListPrincipalsRequestPrivate;

class QTAWSRAM_EXPORT ListPrincipalsRequest : public RamRequest {

public:
    ListPrincipalsRequest(const ListPrincipalsRequest &other);
    ListPrincipalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrincipalsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif

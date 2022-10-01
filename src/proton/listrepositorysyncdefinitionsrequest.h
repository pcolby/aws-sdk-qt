// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYSYNCDEFINITIONSREQUEST_H
#define QTAWS_LISTREPOSITORYSYNCDEFINITIONSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListRepositorySyncDefinitionsRequestPrivate;

class QTAWSPROTON_EXPORT ListRepositorySyncDefinitionsRequest : public ProtonRequest {

public:
    ListRepositorySyncDefinitionsRequest(const ListRepositorySyncDefinitionsRequest &other);
    ListRepositorySyncDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositorySyncDefinitionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

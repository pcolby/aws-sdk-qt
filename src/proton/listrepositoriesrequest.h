// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESREQUEST_H
#define QTAWS_LISTREPOSITORIESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListRepositoriesRequestPrivate;

class QTAWSPROTON_EXPORT ListRepositoriesRequest : public ProtonRequest {

public:
    ListRepositoriesRequest(const ListRepositoriesRequest &other);
    ListRepositoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

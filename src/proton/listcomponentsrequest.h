// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_H
#define QTAWS_LISTCOMPONENTSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentsRequestPrivate;

class QTAWSPROTON_EXPORT ListComponentsRequest : public ProtonRequest {

public:
    ListComponentsRequest(const ListComponentsRequest &other);
    ListComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

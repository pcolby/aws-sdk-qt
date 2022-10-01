// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSREQUEST_H
#define QTAWS_LISTENVIRONMENTSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentsRequestPrivate;

class QTAWSPROTON_EXPORT ListEnvironmentsRequest : public ProtonRequest {

public:
    ListEnvironmentsRequest(const ListEnvironmentsRequest &other);
    ListEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

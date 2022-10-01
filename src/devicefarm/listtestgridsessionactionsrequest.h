// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONACTIONSREQUEST_H
#define QTAWS_LISTTESTGRIDSESSIONACTIONSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionActionsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridSessionActionsRequest : public DeviceFarmRequest {

public:
    ListTestGridSessionActionsRequest(const ListTestGridSessionActionsRequest &other);
    ListTestGridSessionActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridSessionActionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

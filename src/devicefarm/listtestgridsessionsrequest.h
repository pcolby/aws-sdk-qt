// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONSREQUEST_H
#define QTAWS_LISTTESTGRIDSESSIONSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridSessionsRequest : public DeviceFarmRequest {

public:
    ListTestGridSessionsRequest(const ListTestGridSessionsRequest &other);
    ListTestGridSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridSessionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITESREQUEST_H
#define QTAWS_LISTSUITESREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListSuitesRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListSuitesRequest : public DeviceFarmRequest {

public:
    ListSuitesRequest(const ListSuitesRequest &other);
    ListSuitesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuitesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

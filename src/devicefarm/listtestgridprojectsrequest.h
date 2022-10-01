// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDPROJECTSREQUEST_H
#define QTAWS_LISTTESTGRIDPROJECTSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridProjectsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridProjectsRequest : public DeviceFarmRequest {

public:
    ListTestGridProjectsRequest(const ListTestGridProjectsRequest &other);
    ListTestGridProjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridProjectsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

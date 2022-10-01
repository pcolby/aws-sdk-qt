// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKPROFILESREQUEST_H
#define QTAWS_LISTNETWORKPROFILESREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListNetworkProfilesRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListNetworkProfilesRequest : public DeviceFarmRequest {

public:
    ListNetworkProfilesRequest(const ListNetworkProfilesRequest &other);
    ListNetworkProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkProfilesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

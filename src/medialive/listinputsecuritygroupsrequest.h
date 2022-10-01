// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSECURITYGROUPSREQUEST_H
#define QTAWS_LISTINPUTSECURITYGROUPSREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputSecurityGroupsRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ListInputSecurityGroupsRequest : public MediaLiveRequest {

public:
    ListInputSecurityGroupsRequest(const ListInputSecurityGroupsRequest &other);
    ListInputSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputSecurityGroupsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

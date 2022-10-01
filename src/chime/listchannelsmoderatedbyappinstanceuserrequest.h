// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_H
#define QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListChannelsModeratedByAppInstanceUserRequestPrivate;

class QTAWSCHIME_EXPORT ListChannelsModeratedByAppInstanceUserRequest : public ChimeRequest {

public:
    ListChannelsModeratedByAppInstanceUserRequest(const ListChannelsModeratedByAppInstanceUserRequest &other);
    ListChannelsModeratedByAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsModeratedByAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

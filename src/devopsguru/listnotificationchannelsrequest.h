// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONCHANNELSREQUEST_H
#define QTAWS_LISTNOTIFICATIONCHANNELSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListNotificationChannelsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT ListNotificationChannelsRequest : public DevOpsGuruRequest {

public:
    ListNotificationChannelsRequest(const ListNotificationChannelsRequest &other);
    ListNotificationChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotificationChannelsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

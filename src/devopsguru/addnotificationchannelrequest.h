// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELREQUEST_H
#define QTAWS_ADDNOTIFICATIONCHANNELREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class AddNotificationChannelRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT AddNotificationChannelRequest : public DevOpsGuruRequest {

public:
    AddNotificationChannelRequest(const AddNotificationChannelRequest &other);
    AddNotificationChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddNotificationChannelRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

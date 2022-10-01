// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDANNOUNCEMENTREQUEST_H
#define QTAWS_SENDANNOUNCEMENTREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendAnnouncementRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SendAnnouncementRequest : public AlexaForBusinessRequest {

public:
    SendAnnouncementRequest(const SendAnnouncementRequest &other);
    SendAnnouncementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendAnnouncementRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

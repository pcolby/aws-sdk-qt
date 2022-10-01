// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEREQUEST_H
#define QTAWS_DELETESCHEDULEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteScheduleRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DeleteScheduleRequest : public MediaLiveRequest {

public:
    DeleteScheduleRequest(const DeleteScheduleRequest &other);
    DeleteScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduleRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSCHEDULEREQUEST_H
#define QTAWS_GETCHANNELSCHEDULEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelScheduleRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT GetChannelScheduleRequest : public MediaTailorRequest {

public:
    GetChannelScheduleRequest(const GetChannelScheduleRequest &other);
    GetChannelScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREFETCHSCHEDULEREQUEST_H
#define QTAWS_GETPREFETCHSCHEDULEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetPrefetchScheduleRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT GetPrefetchScheduleRequest : public MediaTailorRequest {

public:
    GetPrefetchScheduleRequest(const GetPrefetchScheduleRequest &other);
    GetPrefetchScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPrefetchScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

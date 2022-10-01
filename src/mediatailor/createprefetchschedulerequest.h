// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREFETCHSCHEDULEREQUEST_H
#define QTAWS_CREATEPREFETCHSCHEDULEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreatePrefetchScheduleRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT CreatePrefetchScheduleRequest : public MediaTailorRequest {

public:
    CreatePrefetchScheduleRequest(const CreatePrefetchScheduleRequest &other);
    CreatePrefetchScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePrefetchScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

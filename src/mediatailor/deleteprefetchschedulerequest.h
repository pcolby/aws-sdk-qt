// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREFETCHSCHEDULEREQUEST_H
#define QTAWS_DELETEPREFETCHSCHEDULEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeletePrefetchScheduleRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DeletePrefetchScheduleRequest : public MediaTailorRequest {

public:
    DeletePrefetchScheduleRequest(const DeletePrefetchScheduleRequest &other);
    DeletePrefetchScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePrefetchScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

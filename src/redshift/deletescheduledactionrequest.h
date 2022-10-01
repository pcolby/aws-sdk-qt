// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONREQUEST_H
#define QTAWS_DELETESCHEDULEDACTIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteScheduledActionRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteScheduledActionRequest : public RedshiftRequest {

public:
    DeleteScheduledActionRequest(const DeleteScheduledActionRequest &other);
    DeleteScheduledActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledActionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

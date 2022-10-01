// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDACTIONREQUEST_H
#define QTAWS_CREATESCHEDULEDACTIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateScheduledActionRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateScheduledActionRequest : public RedshiftRequest {

public:
    CreateScheduledActionRequest(const CreateScheduledActionRequest &other);
    CreateScheduledActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduledActionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

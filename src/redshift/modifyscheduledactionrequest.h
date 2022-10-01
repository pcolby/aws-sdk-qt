// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSCHEDULEDACTIONREQUEST_H
#define QTAWS_MODIFYSCHEDULEDACTIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyScheduledActionRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyScheduledActionRequest : public RedshiftRequest {

public:
    ModifyScheduledActionRequest(const ModifyScheduledActionRequest &other);
    ModifyScheduledActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyScheduledActionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

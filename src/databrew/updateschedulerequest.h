// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEREQUEST_H
#define QTAWS_UPDATESCHEDULEREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateScheduleRequestPrivate;

class QTAWSDATABREW_EXPORT UpdateScheduleRequest : public DataBrewRequest {

public:
    UpdateScheduleRequest(const UpdateScheduleRequest &other);
    UpdateScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScheduleRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif

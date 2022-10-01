// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEJOBREQUEST_H
#define QTAWS_UPDATEPROFILEJOBREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateProfileJobRequestPrivate;

class QTAWSDATABREW_EXPORT UpdateProfileJobRequest : public DataBrewRequest {

public:
    UpdateProfileJobRequest(const UpdateProfileJobRequest &other);
    UpdateProfileJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfileJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif

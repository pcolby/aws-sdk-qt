// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEJOBREQUEST_H
#define QTAWS_CREATEPROFILEJOBREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateProfileJobRequestPrivate;

class QTAWSDATABREW_EXPORT CreateProfileJobRequest : public DataBrewRequest {

public:
    CreateProfileJobRequest(const CreateProfileJobRequest &other);
    CreateProfileJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfileJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif

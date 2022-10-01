// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKPROFILEREQUEST_H
#define QTAWS_DELETENETWORKPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteNetworkProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteNetworkProfileRequest : public AlexaForBusinessRequest {

public:
    DeleteNetworkProfileRequest(const DeleteNetworkProfileRequest &other);
    DeleteNetworkProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

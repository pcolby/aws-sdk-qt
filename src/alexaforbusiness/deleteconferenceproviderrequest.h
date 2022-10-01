// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFERENCEPROVIDERREQUEST_H
#define QTAWS_DELETECONFERENCEPROVIDERREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteConferenceProviderRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteConferenceProviderRequest : public AlexaForBusinessRequest {

public:
    DeleteConferenceProviderRequest(const DeleteConferenceProviderRequest &other);
    DeleteConferenceProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

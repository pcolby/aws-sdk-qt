// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFERENCEPROVIDERSREQUEST_H
#define QTAWS_LISTCONFERENCEPROVIDERSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListConferenceProvidersRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListConferenceProvidersRequest : public AlexaForBusinessRequest {

public:
    ListConferenceProvidersRequest(const ListConferenceProvidersRequest &other);
    ListConferenceProvidersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConferenceProvidersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

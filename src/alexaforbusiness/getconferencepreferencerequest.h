// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPREFERENCEREQUEST_H
#define QTAWS_GETCONFERENCEPREFERENCEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferencePreferenceRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetConferencePreferenceRequest : public AlexaForBusinessRequest {

public:
    GetConferencePreferenceRequest(const GetConferencePreferenceRequest &other);
    GetConferencePreferenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConferencePreferenceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFERENCEPREFERENCEREQUEST_H
#define QTAWS_PUTCONFERENCEPREFERENCEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutConferencePreferenceRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutConferencePreferenceRequest : public AlexaForBusinessRequest {

public:
    PutConferencePreferenceRequest(const PutConferencePreferenceRequest &other);
    PutConferencePreferenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConferencePreferenceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

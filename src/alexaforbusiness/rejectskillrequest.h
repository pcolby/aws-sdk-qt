// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSKILLREQUEST_H
#define QTAWS_REJECTSKILLREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RejectSkillRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT RejectSkillRequest : public AlexaForBusinessRequest {

public:
    RejectSkillRequest(const RejectSkillRequest &other);
    RejectSkillRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectSkillRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

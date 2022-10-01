// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONSCOREREQUEST_H
#define QTAWS_GETQUALIFICATIONSCOREREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class GetQualificationScoreRequestPrivate;

class QTAWSMTURK_EXPORT GetQualificationScoreRequest : public MTurkRequest {

public:
    GetQualificationScoreRequest(const GetQualificationScoreRequest &other);
    GetQualificationScoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQualificationScoreRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

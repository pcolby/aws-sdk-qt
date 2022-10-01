// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTQUALIFICATIONREQUESTREQUEST_H
#define QTAWS_ACCEPTQUALIFICATIONREQUESTREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class AcceptQualificationRequestRequestPrivate;

class QTAWSMTURK_EXPORT AcceptQualificationRequestRequest : public MTurkRequest {

public:
    AcceptQualificationRequestRequest(const AcceptQualificationRequestRequest &other);
    AcceptQualificationRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptQualificationRequestRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

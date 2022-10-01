// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIFFERENCESREQUEST_H
#define QTAWS_GETDIFFERENCESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetDifferencesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetDifferencesRequest : public CodeCommitRequest {

public:
    GetDifferencesRequest(const GetDifferencesRequest &other);
    GetDifferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDifferencesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

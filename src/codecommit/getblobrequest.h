// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOBREQUEST_H
#define QTAWS_GETBLOBREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetBlobRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetBlobRequest : public CodeCommitRequest {

public:
    GetBlobRequest(const GetBlobRequest &other);
    GetBlobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlobRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

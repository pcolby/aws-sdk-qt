// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILEREQUEST_H
#define QTAWS_PUTFILEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutFileRequestPrivate;

class QTAWSCODECOMMIT_EXPORT PutFileRequest : public CodeCommitRequest {

public:
    PutFileRequest(const PutFileRequest &other);
    PutFileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFileRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
